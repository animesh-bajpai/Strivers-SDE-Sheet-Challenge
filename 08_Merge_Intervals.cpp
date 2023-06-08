#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int n = intervals.size(), j = 0;

    if (n < 2)
        return intervals;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);

    for (int i = 1; i < n; i++)
    {
        if (ans[j][1] >= intervals[i][0])
            ans[j][1] = max(ans[j][1], intervals[i][1]);

        else
        {
            ans.push_back(intervals[i]);
            j++;
        }
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
        vector<vector<int>> intervals;
        mergeIntervals(intervals);
    }

    return 0;
}