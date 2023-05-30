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
    string s;
    cin >> s;
    if (s.size() > 10)
        cout << s[0] << s.size() - 2 << s[s.size() - 1]<<"\n";
    else cout << s << "\n";
}
int main(){
    FAST();
 Test    solve();
}