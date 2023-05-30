#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(i, n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}



int main() {
    cin.tie(0),cin.sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int>v(n),ans;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (i>0) {
            if (v[i] <= v[i - 1]) {
                ans.push_back(v[i-1]);
            }
        }
    }
    cout<<ans.size()+1 << el;
    for (int i = 0; i <ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << v[n-1];
}

