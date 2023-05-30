#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int n, x, a, b;

ll f(int i)
{
    if(!i) return a;
    if(i == 1) return b;
    return f(i - 1) ^ f(i - 2);
}


void slv()
{
    cin>>a>>b>>n;
    int ans[3]={a,b,a^b};
    cout<<ans[n%3];

}


signed main()
{
    Test slv(), cout << "\n";
}