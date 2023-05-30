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
// 1  4  7                                     i+=3
//012345678
//{a, b, c}

void solve(){



    int n,c=0;cin>>n;
    string s;cin>>s;

    for (int i = 0; i < n-1; ++i) {
        if(s[i]==s[i+1])c++;
    }
    cout<<c;

}
int main() {
    FAST();
     solve();
}