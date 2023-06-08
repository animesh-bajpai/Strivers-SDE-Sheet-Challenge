#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &nums, int n)
{
    pair<int, int> ans;
    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n; i++)
        hash[nums[i]]++;

    for (int i = 0; i < n + 1; i++)
    {
        if (!hash[i])
            ans.first = i;
        if (hash[i] > 1)
            ans.second = i;
    }

    return ans;
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
        vector<int> arr1;
        missingAndRepeating(arr1, 5);
    }

    return 0;
}