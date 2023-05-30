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
    cin >>s;
    bool ans = true;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size()-1; i++){
        if(s[i+1]-s[i] != 1){
            ans = false;
            break;
        }
    }
    if(ans)cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    FAST();
    Test solve();
}