#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
        if (st.size() != (i + 1))
            return arr[i];
    }

    return arr[n - 1];
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
        findDuplicate(arr1, 5);
    }

    return 0;
}