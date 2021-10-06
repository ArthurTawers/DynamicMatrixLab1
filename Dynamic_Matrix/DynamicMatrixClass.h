#pragma once

/*Постpоить класс для pаботы с квадратными матрицами. 
Класс должен включать соответствую-щие поля:
порядок матрицы, набор элементов. Класс должен обеспечивать пpостейшие функ-ции для pаботы с данными класса:
транспонирование матрицы, сложение матриц, вывод матри-цы в удобной форме на экран и т.д.*/
class DynamicMatrixClass
{
public:
	static int Value;
	
	DynamicMatrixClass();
	DynamicMatrixClass(int n,int m);
	void Enter();
	void CollatimgRows();
	void ChangeElem(int newElem, int n, int m);
	int SearchElem(int n, int m);
	char* ToString();
	DynamicMatrixClass(const DynamicMatrixClass& ob);
private:
	int N = 0, M = 0;
	int** mtrx = nullptr;
	bool Correct(int n, int m);
};

