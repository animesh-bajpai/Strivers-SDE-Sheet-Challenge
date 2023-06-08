/*
    Question -> https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge
*/

#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int num)
{
    int d = 0, n = 0, f = num - 1;
    while (f >= n)
    {
        if (arr[n] == 0)
        {
            swap(arr[d], arr[n]);
            n++;
            d++;
        }
        else if (arr[n] == 1)
            n++;
        else if (arr[n] == 2)
        {
            swap(arr[n], arr[f]);
            f--;
        }
    }
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
        int arr[5];
        sort012(arr, 5);
    }

    return 0;
}