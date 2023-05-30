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



    string a;
    cin>>a;
    int n=a.size();
    for(int i =n-1 ;i>-1 ;i--){
        if(a[i]=='0')
            a.erase(i,1);
        else break;
    }

    bool yyy = 1;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i]!=a[a.size()-1-i]){
            yyy=0;break;
        }
    }

    cout<<(yyy?"Yes":"No");

}
int main() {
    FAST();
     solve();
}