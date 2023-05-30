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
    ll n , count=0 ;
    bool flag ;
    char k;
    string s;
    cin >>n>>k;
    while(n--)
    {
        flag=1;
        cin >>s;
        for(char i= '0' ; i<=k ; i++)
            if(s.find(i)==-1) {
                flag=0;
                break;
            }
        if(flag)
            count++;
    }
    cout <<count<<el;
}
int main(){
    FAST();
     solve();
}