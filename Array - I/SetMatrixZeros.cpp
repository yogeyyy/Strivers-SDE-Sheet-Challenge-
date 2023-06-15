#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
	int m = matrix.size();
	int n = matrix[0].size();
	int c0 = 1;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (matrix[i][j] == 0)
			{
				if (j != 0)
				{
					matrix[0][j] = matrix[i][0] = 0;
				}
				else {
					matrix[i][0] = 0;
					c0 = 0;
				}
			}
		}
	}

	for (int i = 1; i < m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (matrix[i][j] != 0)
			{
				if (matrix[i][0] == 0 || matrix[0][j] == 0)
				{
					matrix[i][j] = 0;
				}
			}
		}
	}

	if (matrix[0][0] == 0) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    if (c0 == 0) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	vector <vector <int>> matrix;

	int n,m,q;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		vector <int> row;
		for (int j = 0; j < m; ++j)
		{
			cin >> q;

			row.push_back(q);
		}
		matrix.push_back(row);
	}


	setZeroes(matrix);

	return 0;

}