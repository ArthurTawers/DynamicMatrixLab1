// Dynamic_Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*Постpоить класс для pаботы с квадратными матрицами. Класс должен включать соответствую-щие поля: 
порядок матрицы, набор элементов. Класс должен обеспечивать пpостейшие функ-ции для pаботы с данными класса: 
транспонирование матрицы, сложение матриц, вывод матри-цы в удобной форме на экран и т.д.*/

#include <iostream>
#include "DynamicMatrixClass.h"
#include "Tests.h"

using namespace std;
int main()
{
    Tests tests = Tests();
    tests.TestEnter();
    tests.TestChangeSearch();
    tests.TestCollating();
    tests.TestCopyConstruc();
}

