/*
    Question -> https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/

#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices)
{

    int buy = prices[0], ans = INT_MIN, n = prices.size();

    for (int i = 1; i < n; i++)
    {
        int profit = prices[i] - buy;
        ans = max(ans, profit);

        if (buy > prices[i])
            buy = prices[i];
    }

    if (ans < 0)
        return 0;
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
        vector<int> arr;
        maximumProfit(arr);
    }

    return 0;
}