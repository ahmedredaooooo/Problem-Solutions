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
#define float ld
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);

const LL mod = 1e9 + 7;
const int N = 1;
const ld pi = 3.14159265359;

void Solve() {
//    int a, b, c, d, x, y;
//    cin >> a >> b >> c >> d;
//    int startX, endX, startY, endY;
//    startX = a + 1, endX = c;
//    startY = b + 1, endY = d;
//    while (startX <= endX)
//    {
//        int midX = (startX + endX) / 2;
//        while (startY <= endY)
//        {
//            int midY = (startY + endY) / 2;
//            if ((midX * midY) % (a * b) == 0)
//            {
//                cout << midX << " " << midY << el;
//                break;
//            }
//            if (midX * midY > a * b)
//        }
//    }
    int n, x = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < n; ++i) {
        x += abs(v[i] - (1 + i));
    }
    cout << x;
}

signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
