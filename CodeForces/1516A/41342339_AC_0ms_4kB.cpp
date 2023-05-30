/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#else
#define debug(...) 1
#define Time(i, x...) x
#endif

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);
//int x = accumulate(all(v),0LL);
//partial_sum(all(v), v.begin);




void Solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i: v)
        cin >> i;
    for (int i = 0; i < n - 1; ++i)
        while (v[i] > 0 && k)
            v[i]--, k--, v[n - 1]++;
    for (auto i: v) {
        cout << i << " ";
    }

}

signed main() {
    sad;
//    FILE
    Test
        Solve(), cout << el;
}