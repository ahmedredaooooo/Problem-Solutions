#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())






int main()
{
    sad
        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 3];
        int b[n + 3];
        deque<int> dq;
        bool good = 1;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                good = 0;
            dq.push_back(a[i] - b[i]);
        }

        while (sz(dq) && !dq.front())
            dq.pop_front();

        while (sz(dq) && !dq.back())
            dq.pop_back();

        for (int i = 0; i < sz(dq) - 1; i++)
        {
            if (dq[i] != dq[i + 1])
                good = 0;
        }

        if (good)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

