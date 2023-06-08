#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    for (int i = 0; i < m; i++)
        if (target <= mat[i][n - 1])
        {
            for (int j = 0; j < n; j++)
                if (target == mat[i][j])
                    return true;

            return false;
        }
    return false;
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
        vector<vector<int>> arr1;
        searchMatrix(arr1, 5);
    }

    return 0;
}