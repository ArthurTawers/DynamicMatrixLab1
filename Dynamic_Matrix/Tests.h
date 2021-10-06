#pragma once

#include <iostream>
#include "DynamicMatrixClass.h"
#include <cassert>

using namespace std;
class Tests
{
    DynamicMatrixClass matrix1 = DynamicMatrixClass(5, 4);
public:
    void TestEnter()
    {
        setlocale(0, "ru");
        matrix1.Enter();
        cout << "����� ���� �������: " << endl;
        cout << matrix1.ToString() << endl;
        assert(DynamicMatrixClass::Value == 1);
        cout << "���������� �� ����������� �����: " << endl;
        matrix1.CollatimgRows();
        cout << matrix1.ToString() << endl;
        matrix1.SearchElem(4, 4);
        cout << "����� �1 �������" << endl;
    }
    void TestChangeSearch()
    {
        cout << "\n�������� ����� 5 �� ����� " << matrix1.SearchElem(4,3) << endl;       
        matrix1.ChangeElem(5, 4, 3);
       //matrix.T
        cout << matrix1.ToString() << endl;
        assert(matrix1.SearchElem(4, 3) == 5);
        cout << "����� �2 �������" << endl;
    }

    void TestCollating()
    {
        cout << "\n�������� �� ����������� �����" << endl;
        matrix1.CollatimgRows();
        assert(matrix1.SearchElem(2, 2) < matrix1.SearchElem(3, 2));
        cout << matrix1.SearchElem(2, 2) << " < " << matrix1.SearchElem(3, 2) << endl;
        cout << matrix1.ToString() << endl;
        cout << "����� �3 �������" << endl; 
    }

    void TestCopyConstruc()
    {
        cout << "\n���� ������������ ����������� " << endl;
        DynamicMatrixClass newob = DynamicMatrixClass(matrix1);
        cout << newob.ToString() << endl;
    }
};
