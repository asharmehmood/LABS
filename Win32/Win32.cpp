// Win32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "MatrixLib.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int r, c, in_val = 0;
	vector<vector<int>> mat1, mat2, add, sub;
	cout << "Enter matrix' rows";
	cin >> r;
	cout << "Enter matrix' columns";
	cin >> c;

	mat1.resize(r, vector<int>(c, in_val));
	mat2.resize(r, vector<int>(c, in_val));

	cout << "Enter first matrix:" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mat1[i][j];
			cout << " ";
		}
		cout << endl;
	}

	cout << "Enter 2nd matrix:" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mat2[i][j];
			cout << " ";
		}
		cout << endl;
	}


	add = mat_addition(mat1, mat2, r, c);
	sub = mat_subtraction(mat1, mat2, r, c);

	cout << "Addition of matrix" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Subtraction of matrix" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

