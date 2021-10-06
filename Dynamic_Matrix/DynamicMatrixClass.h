#pragma once

/*����p���� ����� ��� p����� � ����������� ���������. 
����� ������ �������� ������������-��� ����:
������� �������, ����� ���������. ����� ������ ������������ �p�������� ����-��� ��� p����� � ������� ������:
���������������� �������, �������� ������, ����� �����-�� � ������� ����� �� ����� � �.�.*/
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

