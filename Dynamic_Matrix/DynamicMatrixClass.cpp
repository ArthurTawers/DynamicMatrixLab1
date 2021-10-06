#include "DynamicMatrixClass.h"
#include <iostream>
#include <iomanip>
#include "ctime"
using namespace std;

int DynamicMatrixClass::Value = 0;

bool DynamicMatrixClass::Correct(int n, int m)
{
	if (n >=N || n<1 || m>=M || m < 1 || mtrx == nullptr)
		return false;
	return true;
}

DynamicMatrixClass::DynamicMatrixClass()
{
	M = 0;
	N = 0;
	mtrx = nullptr;
}

DynamicMatrixClass::DynamicMatrixClass(const DynamicMatrixClass& ob)
	:DynamicMatrixClass(ob.N,ob.M)
{
	
	this->mtrx = nullptr;
	try
	{
		if (N < 1 || M < 1 || N > INT32_MAX || M > INT32_MAX)
			throw 1;

		mtrx = new int* [M];

		for (int i = 0; i < M; i++)
		{
			mtrx[i] = new int[N];
			for (int j = 0; j < N; j++)
			{
				mtrx[i][j] = ob.mtrx[i][j];

			}
		}
		Value++;
	}
	catch (int i)
	{
		cout << "ошибка: " << i << " некорректные N или M" << endl;
	}
}

DynamicMatrixClass::DynamicMatrixClass(int n, int m)
{
	M = m;
	N = n;
	mtrx = nullptr;
	try
	{
		if (n < 1 || m < 1 || n > INT32_MAX || m > INT32_MAX)
			throw 1;		

		mtrx = new int* [m];

		for (int i = 0; i < m; i++)
		{
			mtrx[i] = new int[n];			
		}
		Value++;
	}
	catch (int i)
	{
		cout << "ошибка: " << i << " некорректные N или M" << endl;
	}
}

void DynamicMatrixClass::Enter()
{
	srand(time(0));
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mtrx[i][j] = rand() % 1000;
		}
	}
}



void DynamicMatrixClass::CollatimgRows()
{
	for (unsigned i = 0; i < M; i++) 
	{
		for (unsigned j = 0; j < N - 1; j++) 
		{
			for (unsigned k = 0; k < N - j - 1; k++) 
			{
				if (mtrx[i][k] > mtrx[i][k + 1]) {
					int tmp = mtrx[i][k];
					mtrx[i][k] = mtrx[i][k + 1];
					mtrx[i][k + 1] = tmp;
				}
			}
		}
	}
}

int DynamicMatrixClass::SearchElem(int n, int m)
{
	try
	{
		if (Correct(n,m))
			return mtrx[m][n];
		else
			throw 2;
	}
	catch (int i)
	{
		
	}
}

void DynamicMatrixClass::ChangeElem(int newElem, int n, int m)
{
	try
	{
		if (Correct(n, m))
			mtrx[m][n] = newElem;
		else
			throw 3;
	}
	catch (int i)
	{
		
	}
}

char* DynamicMatrixClass::ToString()
{
	char** str = new char*[M];
	int index = 0;
	char* mystring = new char[M * N * 6];
	mystring[0] = '\0';
	for (int i = 0; i < M; i++)
	{
		str[i] = new char[N * 6];
		str[i][0] = '\0';
		for (int j = 0; j < N; j++)
		{
			char ch[5];
			_itoa_s(mtrx[i][j], ch, 10);
			ch[4] = '\0';
			strcat_s(str[i], N * 6,ch);

			strcat_s(str[i], N * 6, " ");
		}
		if(i<M-1)
			strcat_s(str[i], N * 6, "\n");
		strcat_s(mystring, M * N * 6, str[i]);
		
	}

	return mystring;
}