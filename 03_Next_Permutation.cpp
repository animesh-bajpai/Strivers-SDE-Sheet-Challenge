/*
    Question -> https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i, j;
    vector<int> ans;

    for (i = n - 2; i > -1; i--)
        if (permutation[i] < permutation[i + 1])
            break;

    if (i < 0)
        reverse(permutation.begin(), permutation.end());
    else
    {
        for (j = n - 1; j > i; j--)
            if (permutation[i] < permutation[j])
                break;

        swap(permutation[i], permutation[j]);
        reverse(permutation.begin() + i + 1, permutation.end());
    }

    return permutation;
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
        vector<int> permutation;
        nextPermutation(permutation, 5);
    }

    return 0;
}