#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (i > -1 and j > -1)
    {
        if (arr1[i] > arr2[j])
            arr1[k--] = arr1[i--];
        else
            arr1[k--] = arr2[j--];
    }

    while (i > -1)
        arr1[k--] = arr1[i--];
    while (j > -1)
        arr1[k--] = arr2[j--];

    return arr1;
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
        vector<int> arr1, arr2;
        ninjaAndSortedArrays(arr1, arr2, 5, 2);
    }

    return 0;
}