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
    string s,ss="";
    cin >> s;
    for (int i = 0; i < s.size(); i+=2) {
        ss+=s[i];
    }
    cout<<ss<<s[s.size()-1]<<el;
}
int main() {
    FAST();
 Test    solve();
}