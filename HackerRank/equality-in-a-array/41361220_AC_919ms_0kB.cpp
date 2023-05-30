#include <bits/stdc++.h>
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

int equalizeArray(vector<int> arr) {
    map<int,int>frq;
    for (auto i : arr) {
        frq[i]++;
    }
    int mx = -1;
    for (auto [l,r] : frq) {
        mx = max(mx,r);
    }
    return arr.size()-mx;
}



void Solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v)cin >> i;
    cout << equalizeArray(v);
}

signed main() {
    sad;
//    FILE
//    Test
        Solve(), cout << el;
}
