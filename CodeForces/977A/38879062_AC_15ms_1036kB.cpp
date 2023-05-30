#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}


void solve(){

    ll n,a ;cin>>n>>a;
    while (a--){
        if(n%10==0)n/=10;
        else n--;
    }
    cout<<n;
}
int main(){
    FAST();
     solve();
}