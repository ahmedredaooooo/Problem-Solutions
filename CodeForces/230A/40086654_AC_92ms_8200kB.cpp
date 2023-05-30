#include <iostream>
#include <set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)


void solve()
{
    int s, n; 
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; ++i)
    {
        int z, y; cin >> z >> y;
        dragons.push_back({ z, y });
    }
    sort(dragons.begin(), dragons.end());
    for (int i = 0; i < dragons.size(); ++i)
    {
        if (s > dragons[i].first)
            s += dragons[i].second;
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    
 
        solve();
   

    return 0;
}