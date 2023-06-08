/*
    Question -> https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
*/

#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!matrix[i][j])
            {
                row[i] = 1;
                col[j] = 1;
            }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (row[i] or col[j])
                matrix[i][j] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        vector<vector<int>> matrix;
        setZeros(matrix);
    }

    return 0;
}