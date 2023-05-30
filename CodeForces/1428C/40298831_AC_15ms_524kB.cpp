/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned ll TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

const ll MOD = 1e9 + 7;
ll n;
string s;
int main() {
    sad;
Test{
        cin >> s;

        int c = 0;
        for (int i = 0; i < sz(s); i++)
            if (c && s[i] == 'B')   c--;
            else c++;
        cout << c << el;
};













    //
//cin >> n >> m;
//
//
//    if (m % n) {
//        cout << -1;
//        return 0;
//    }
//    if (m == n) {
//        cout << 0;
//        return 0;
//    }
//    m /= n;
//
//    while(m % 2 == 0) {
//        c++;
//        m /= 2;
//    }
//
//    while(m % 3 == 0) {
//        c++;
//        m /= 3;
//    }
//
//    if (m > 1) cout << -1;
//    else cout << c ;


//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if(j == m-1 && x && i%2)
//                arr[i][j] = '#', x = !x;
//            if (j == 0 && !x && i%2 ){
//                arr[i][j] = '#'; x = !x;
//                continue;
//            }
//
//            cout << arr[i][j];
//        }
//        cout << el;
//    }















//if(m == n)
//    cout << 0;
//else if(n % m)
//    cout << -1;
//else {
//    if(fun())
//        cout << c;
//    else cout << -1;

}

