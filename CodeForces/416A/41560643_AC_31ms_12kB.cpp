#include "bits/stdc++.h"
using namespace std;
#define Test int tc; cin >> tc; while(tc--)


string s, ans;
int mn = -1e9-1, mx = 1e9+1, n;

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

    Test {

        cin >> s >> n >> ans;
        if (ans == "N") {
            if (s == "<")s = ">=";
            else if (s == ">")s = "<=";
            else if (s == "<=")s = ">";
            else s = "<";
        }
        if (s == ">=")
            mn = max(mn, n);
        else if (s == "<=")
            mx = min(mx, n);
        else if (s == ">")
            mn = max(mn, ++n);
        else
            mx = min(mx, --n);


    };
    mn <= mx ? cout << (mn + mx) / 2 : cout << "Impossible\n";

}