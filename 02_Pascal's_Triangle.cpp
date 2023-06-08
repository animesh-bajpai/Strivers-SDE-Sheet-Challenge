/*
    Question -> https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> answer(n);

    for (int i = 0; i < n; i++)
    {
        answer[i].resize(i + 1);
        answer[i][0] = answer[i][i] = 1;

        for (int j = 1; j < i; j++)
            answer[i][j] = answer[i - 1][j - 1] + answer[i - 1][j];
    }

    return answer;
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
        printPascal(5);
    }

    return 0;
}