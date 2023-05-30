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
vector<ll>v;
//v.push_back(0);
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(5);
//    v.push_back(6);
//    v.push_back(7);
//    v.push_back(8);
//    v.push_back(9);
////    v.push_back(11);
////    v.push_back(22);
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(11*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(1111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(11111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(111111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(1111111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(11111111*i);
//    }
//    for (int i = 1; i <= 9; ++i) {
//        v.push_back(111111111*i);
//    }
//
    Test{
        ll n,ans=0;
        cin>>n;
        bool flag=0;
        ll arr[10]={0,1,11,111,1111,11111,111111,1111111,11111111,111111111};
        for (ll j = 1; j < 10; j++) {
            for (ll k = 1; k < 10; k++) {
                if (arr[j]*k>n) {
                    flag=1;
                    break;
                }
                else
                    ans++;
            }
            if(flag)
                break;
        }
        cout<<ans<<el;

    }













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

