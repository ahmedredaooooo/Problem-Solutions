#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void solve(){
    ll a, b, c;
    cin>> a >> b >> c;
    if(a+b== c||a+c==b||c+b==a)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
int main(){
   Test  solve();

}