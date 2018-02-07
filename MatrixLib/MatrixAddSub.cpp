#include<iostream>
#include<vector>
#include"MatrixLib.h"
using namespace std;

vector<vector<int>> MatrixLib::mat_addition(vector<vector <int>> a, vector<vector <int>> b, int rows, int cols)
{
	vector<vector<int>> res;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			res[i][j] = a[i][j] + b[i][j];
		}
	}
	return res;
}


vector<vector<int>> MatrixLib::mat_subtraction(vector<vector <int>> a, vector<vector <int>> b, int rows, int cols)
{
	vector<vector<int>> res;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			res[i][j] = a[i][j] - b[i][j];
		}
	}
	return res;
}



