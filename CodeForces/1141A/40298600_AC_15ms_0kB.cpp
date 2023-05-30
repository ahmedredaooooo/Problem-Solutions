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
ll m , n;
ll c = 0;
bool fun(ll x = m) {
    if(x == n)
        return 1;
    else if(x > n)
        return 0;
    c++;
    return fun(3*x) || fun(2*x);

}
int main() {

cin >> n >> m;


    if (m % n) {
        cout << -1;
        return 0;
    }
    if (m == n) {
        cout << 0;
        return 0;
    }
    m /= n;

    while(m % 2 == 0) {
        c++;
        m /= 2;
    }

    while(m % 3 == 0) {
        c++;
        m /= 3;
    }

    if (m > 1) cout << -1;
    else cout << c ;


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

