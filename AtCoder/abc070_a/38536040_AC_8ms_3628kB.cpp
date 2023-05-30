#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define el "\n"
#define Test unsigned int tc; cin >> tc; while(tc--)
const  ll N = 1e9+10;

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}



void solve(){


}


int main() {

     string s;
     cin>>s;
     bool x=1;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!=s[s.size()-i-1])
        {
            x=0;
            break;
        }

    }
    if(x)cout<<"Yes";
    else cout<<"No";

}



