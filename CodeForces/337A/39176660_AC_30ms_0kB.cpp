#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}
int main() {
    int n,m;
    cin>>n>>m;
    int a[m];
    loop(m)     cin>>a[i];
    sort(a,a+m);
    int minm=a[n-1]-a[0];
    int diff=0;
    loop(m - n +1)
    {
        diff=a[i+n-1]-a[i];
        minm=min(diff,minm);
    }
    cout<<minm;
}