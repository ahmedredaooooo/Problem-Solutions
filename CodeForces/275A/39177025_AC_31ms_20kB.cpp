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
    ll a[5][5]={0};
    for(ll i=1; i<=3; i++)
    {
        for(ll j=1; j<=3; j++)
            cin>>a[i][j];
    }
    for(ll i=1; i<=3; i++)
    {
        ll sum=0;
        for(ll j=1; j<=3; j++)
        {
            sum=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
            if(sum%2)
                cout<<0;
            else
                cout<<1;

        }
        cout<<"\n";
    }
}
