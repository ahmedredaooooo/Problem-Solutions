/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define LL  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
int mx = 1000000009;

vector<LL>v;

bool sum (LL y){
    int f=0 , s=0;
    while(y)
    {
        if( y%10==4)
            f++;
        else
            s++ ;
        y/=10;
    }
    return f==s;
}

void lucky (LL n = 0)
{
    if(n>1e11){
        return;
    }

        v.push_back(n);
    lucky(n*10+4)
            ,lucky(n*10+7);
}



int main() {
    sad
    lucky();
    sort(v.begin(), v.end());
    LL x, y, ans = 0;
    cin >> x >> y;
    for (int i = x; i <= y;) {
        LL lower = *lower_bound(v.begin(), v.end(), i);
        if (lower <= y) {
            ans += (lower - i + 1) * lower;
            i = lower + 1;
        } else {
            ans += (y - i + 1) * lower;
            break;
        }
    }
cout << ans;
}

