/*
	Given a matrix A of dimension MxN. find the sum S of diagonal elements that are repeated exactly x times elsewhere in the matrix. If A is not a Square matrix convert it into square matrix by using 1 for the missing values. The diagonal starting from A[0][0] is considered. If there are no elements that satisfy the criteria then print '0'
	Sample Test Case: 
		
		Input:
		2 3

		1   2   3
		4   5   6
		2

		Output: 2

		Explanation:
					Given matrix is not a square natrix so first convert it to square. as shown below:

					1   2   3
					4   5   6
					1   1   1

					Diagonal elements are 1,5,1 and x = 2.

					Since 1 is repeated 2times in the matrix  outside the diagonal, 1 should be added to calculate the sun. 5 doesn't appear outside the diagonal so therefore not considered for sum. 

					Finally,  sum = 1 + 1 = 2
				
*/

#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> MakeSquareMatrix(vector<vector<int>> &mat)
{

	int n = mat.size(), m = mat[0].size();
	int maxSoFar = max(n, m);
	vector<vector<int>> temp(maxSoFar, vector<int>(maxSoFar, 1));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			temp[i][j] = mat[i][j];
		}
	}
	return temp;
}

int GetSumXTimes(vector<vector<int>> &mat, int x)
{

	int n = mat.size();
	map<int, int> freq;
	freq.clear();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			freq[mat[i][j]]++;
		}
	}

	int i = 0, sum = 0;
	while (i < n)
	{
		if ((freq.find(mat[i][i]) != freq.end()) && (freq[mat[i][i]] == x))
		{
			sum += mat[i][i];
		}
		i++;
	}

	return sum;
}

int main()
{
	vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}};
	arr = MakeSquareMatrix(arr);
	int x = 2;
	cout << GetSumXTimes(arr, x);
	
	return 0;
}