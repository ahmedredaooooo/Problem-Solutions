




#include <bits/stdc++.h>



using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define float ld
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);



void Solve() {
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
            cout << v[(i+k)%n] << " ";
}

signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
