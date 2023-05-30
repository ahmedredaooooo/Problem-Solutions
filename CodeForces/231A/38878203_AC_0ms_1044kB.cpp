#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void solve(){

    ll a, b, c,n;
     ll ans=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        ll s =0;
        for (int j = 0; j < 3; ++j) {
            cin>>a;
            if (a==1)s++;
        }
        if(s>1)ans++;
    }
 cout<<ans;

}
int main(){
     solve();

}