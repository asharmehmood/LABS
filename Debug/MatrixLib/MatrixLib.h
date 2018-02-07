// MatrixLib.h

#pragma once
#include <iostream>
#include <vector>

using namespace System;
using namespace std;
namespace MatrixLib 
{
	vector<vector<int>> mat_addition(vector<vector <int>> a, vector<vector <int>> b, int rows, int cols);
	vector<vector<int>> mat_subtraction(vector<vector <int>> a, vector<vector <int>> b, int rows, int cols);
};
