/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

ll mod = 1e9 + 7;


string s, st = "";
int n, l, r, k, x;
int arr[100006];

void solve(int num = 0, int sum = 0) {
    if(num == n)
        return ;
    if (arr[num] != x)
        cout << arr[num]<< " ";
    solve(num + 1);

}


int main ()
{
    sad;;;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    solve();
}