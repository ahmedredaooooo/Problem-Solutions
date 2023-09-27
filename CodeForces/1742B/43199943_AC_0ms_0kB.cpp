#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void solve(){
    ll a, b, c,n;
    cin>> n;
    ll arr[n];

    for (int i = 0; i < n; ++i) {
    cin>>arr[i];
    }
    sort(arr,arr+n);
    bool eq = 0;
    for (int i = 0; i < n-1; ++i) {
        if(arr[i]==arr[i+1])
        {
            eq = 1;
            break;
        }
    }
    if (!eq)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
   Test  solve();

}