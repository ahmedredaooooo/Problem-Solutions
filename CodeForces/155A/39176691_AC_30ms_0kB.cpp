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
    int n,dem=0; cin>>n;
    ll a[n+1];
    for (int i=1;i<=n;i++)  cin>>a[i];
    ll max=a[1], min=a[1];
    for (int i=1;i<=n;i++)
    {
        if (a[i]>max) dem++, max=a[i];
        else if (a[i]<min) dem++, min=a[i];
    }
    cout<<dem;
}