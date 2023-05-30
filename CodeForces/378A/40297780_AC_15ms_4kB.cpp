/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

const ll MOD = 1e9 + 7;


int main() {
    ll a , b, ac = 0, bc = 0, dc = 0;
    cin >> a >> b;
    for (int i = 1; i < 7; ++i) {
        if(abs(i-a)>abs(i-b))ac++;
        else if(abs(i-a)<abs(i-b))bc++;
        else dc++;
    }
    cout << bc << " " << dc<<" "<<ac;
}
