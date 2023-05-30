
/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())


const int x = 2e5+5;
void Solve() {
   int n, zero = 0;
   cin >> n;
   vector<int>v, neg, pos;
    for (int i = 0; i < n; ++i) {
        int x;cin >> x;
        if (x>0)
            pos.push_back(x);
        else if (x<0)
            neg.push_back(x);
        else
            zero++;
    }
    if (/*neg.size()%2 &&*/ pos.size())
    {
        cout << 1 << " " << neg.back()<<" ";
        neg.pop_back();
        cout << el;
        cout << 1 <<" "<< pos.back() <<el;
        pos.pop_back();
        cout << zero + pos.size()+neg.size() << " ";
        for (int i = 0; i < zero; ++i) {
            cout << 0 << " ";
        }
        for (int i = 0; i < pos.size(); ++i) {
        cout << pos[i] << " ";
        }
        for (int i = 0; i < neg.size(); ++i) {
                cout << neg[i] << " ";
        }
    }
else
    {
        cout << 1 << " " << neg.back()<<" ";
        neg.pop_back();
        cout << el;
        cout << 2 << " " << neg.back()<<" ";
        neg.pop_back();
        cout << neg.back()<<" " <<el;
        neg.pop_back();
        cout << zero + pos.size()+neg.size() << " ";
        for (int i = 0; i < zero; ++i) {
            cout << 0 << " ";
        }
        for (int i = 0; i < pos.size(); ++i) {
            cout << pos[i] << " ";
        }
        for (int i = 0; i < neg.size(); ++i) {
            cout << neg[i] << " ";
        }
    }



}
signed main() {
    sad;
//    Test
     Solve(), cout << el;

}
