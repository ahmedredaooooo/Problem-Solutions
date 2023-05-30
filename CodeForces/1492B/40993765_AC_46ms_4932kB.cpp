/*                                                     لا اله الا الله محمد رسول الله                                              */
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

void Solve() {
    int n;
    cin >> n;
    int arr[n];
                        //val, idx
    priority_queue<pair<int, int>> prq;
    for (int i = 0; i < n; ++i) {

        cin >> arr[i];
        prq.push({arr[i], i});
    }
    int i = -1;
    while (prq.size()) {
        while (prq.top().second >= n  && prq.size())
            prq.pop();
        i = prq.top().second;

        for (; i < n; ++i) {
            cout << arr[i]  << " ";
        }
            n = prq.top().second;
//        for (int j = 0; j < n; ++j) {
//            cout << prq.top().first << " " << prq.top().second << el;

//        }
    }
}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);;
    Test Solve(), cout << el;
}
