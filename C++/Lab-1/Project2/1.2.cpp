#include<iostream>
#include <stdio.h>
#include <math.h>

using namespace std; // чтобы не записывать std::cin

double* mas1d = new double[25]; //Параметры массива
int per_i = 5;//i
int per_j = 5;//j
int z;//Элемент массива
double mas2d[5][5];//двумерный массив

void processArray(double, int);

void processArray(double* mas1d, int z)
{
	for (int z = 0; z < 25; z++)
	{
		mas1d[z] = z * sin((3.14 * z) / 25);
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");//Русский язык в консоли
	cout << "Массив создан :" << endl;
	processArray(mas1d, z);
	cout << endl;
	for (int z = 0; z < 25; z++)
	{
		cout << mas1d[z];
	}
	cout << endl;
	for (per_i = 0; per_i < 5; per_i++)
	{
		for (per_j = 0; per_j < 5; per_j++)
		{
			mas2d[per_i][per_j] = mas1d[z];
			z++;
		}
	}
	cout << "=>";
	for (per_i = 0; per_i < 5; per_i++)
	{
		for (per_j = 0; per_j < 5; per_j++)
		{
			cout.width(10);
			mas2d[per_i][0] = mas2d[per_i][per_j + 1] + mas2d[per_i][per_j + 2] + mas2d[per_i][per_j + 3] + mas2d[per_i][per_j + 4];
			cout << mas2d[per_i][per_j];
		}
		cout << endl;
		cout << "=>";
	}
	return 0;
}