/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())


const ll MOD = 1e9 + 7;
vector<ll> v(3);


void solve() {
    ll n;
    for (int i = 0; i < 3; ++i) {
        cin >> n;
        v[i] += n;
    }

}

deque<ll> luckys;

void luckyNumberGenerator(ll n, ll tmp = 0) {
    if (n >= 4444)
        return;
    luckys.push_back(n);
    luckyNumberGenerator(7 + n * 10);
    luckyNumberGenerator(4 + n * 10);
}

bool is_prime(ll x ){
    for (ll i = 2;i * i <= x;i++){
        if(!(x % i)) return false;
    }
    return true;
}

void is_Tprime(ll x){
    ll tmp = sqrt(x);
    (tmp * tmp == x && is_prime(tmp)) ? cout << "YES\n" : cout<<"NO\n";
}

int main() {
    sad;;;;;
// prime * prime /*
/*
 * 2*2 = 4
 *  9
 *  25
 *  49
 *  123
 *  169
 */


Test {
        ll x;
        cin >> x;
        if (x == 1)
            cout << "NO\n";
        else
            is_Tprime(x);
    };
}