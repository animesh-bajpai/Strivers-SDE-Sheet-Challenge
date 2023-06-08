#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n)
{
    int m = arr[0], m_freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == m)
            m_freq++;
        else
            m_freq--;

        if (m_freq == 0)
        {
            m = arr[i];
            m_freq++;
        }
    }

    m_freq = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == m)
            m_freq++;

    if (m_freq > (n / 2))
        return m;
    return -1;
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
        int arr1[5];
        findMajorityElement(arr1, 5);
    }

    return 0;
}