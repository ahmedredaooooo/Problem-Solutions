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

//    int n, m, cRange, fRange;
//    cin >> n >> m>> cRange >>fRange;                                                    //val  c  f
//    vector<vector<pair<char, pair<int, int>>>>arr(n,vector<pair<char, pair<int, int>>>(m,{'.', {0,0}}));
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j].first;
//            if (arr[i][j].first == 'c')
//                arr[i][j].second.first++;
//            else if (arr[i][j].first == 'f')
//                arr[i][j].second.second++;
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (i+cRange > n-1)
//        }
//    }





string currentString;
stack<string>stk;
void Solve() {
    int o;
    cin >> o;
    if (o == 1)
    {
        currentString = stk.top();
        string s;
        cin >> s;
        currentString += s;
        stk.push(currentString);
    }
    else if (o == 2)
    {
        currentString = stk.top();
        int k;
        cin >> k;
//        while (k--) currentString.pop_back();
        currentString = currentString.substr(0,currentString.size()-k);
        stk.push(currentString);
    }
    else if (o == 3)
    {
        int k;
        cin >> k;
        cout << stk.top()[--k] << el;
    }
    else
    {
        stk.pop();
    }
}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);, cout << el
    stk.push("");
    Test Solve();
}
