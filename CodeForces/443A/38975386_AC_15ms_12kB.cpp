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


    set<char>sttt;
    bool a[26]={};
    char c;
    cin >> c;
    while (c != '}') {
        if(c!=',')
            sttt.insert(c);
        cin >> c;
    }
    cout << sttt.size()-1;
    int cr = 0;
    for (int i = 0; i < 26; ++i) {
        if(a[i])cr++;
    }

}
int main() {
    FAST();
     solve();
}