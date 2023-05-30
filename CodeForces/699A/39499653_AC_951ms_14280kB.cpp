#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(i, n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}


void solve(){}



int main()
{
    FAST();
    ll n;
    string s;
    cin >> n >> s;
    ll arr[n+3];
    ll mn = 99999999999;
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
        if(i && s[i] == 'L' && s[i-1] == 'R')
            mn = min(mn, (arr[i] - arr[i-1])/2);
    }
    if(mn == 99999999999)
        cout << -1 << "\n";
    else
        cout << mn << "\n";


}
