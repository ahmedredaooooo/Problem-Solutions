#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define int ll
#define Test unsigned int TC; cin >> TC; while(TC--)

bool fourAnd7(int n)
{
    string st = to_string(n);
    int f=0, s =0;
    for(auto i : st)i=='4'?f++:s++;
    return s==f;
}
vector<int>l;
void gl(int n = 0)
{
    if (n > 1e10) return;
    if(fourAnd7(n))
        l.push_back(n);
// cout << n << " ";
    gl(n * 10 + 4);
    gl(n * 10 + 7);
}

void slv()
{
    sort(l.begin(), l.end());
    int n, t;
    cin >>n;
    int s = 0, e = l.size() - 1;
    while(s <= e)
    {
        ll m = (s + e) / 2;
        if(l[m] < n)
            s = m + 1;
        else
            t = l[m], e = m - 1;
    }
    cout << t;
}


signed main()
{
    gl();
    //  Test
    slv(), cout << "\n";
}