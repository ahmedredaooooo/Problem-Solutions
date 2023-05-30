/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0);
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
    priority_queue<int,vector<int>,greater<>>pq;
    int n;cin >> n;
    int cnt = 0, energy = 0;
    for (int i = 0; i < n; ++i) {
        int a ;cin >>a;
        if (a>=0)energy+=a,cnt++;
        else if (energy+a>=0){
            energy += a;
            cnt++;
            pq.push(a);
        }
        else {
            if (!pq.empty()){
                if (pq.top()<a){
                    cnt--;
                    energy-=pq.top();
                    pq.pop();
                    pq.push(a);
                    energy+=a;
                    cnt++;
                }
            }
        }
    }
    cout <<cnt<<el;
}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);;
//    Test
    Solve(), cout << el;
}
