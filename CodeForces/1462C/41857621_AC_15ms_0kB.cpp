    #include <bits/stdc++.h>
    //#include "SortedLinkedList.h"
    #define  int long long
    using namespace std;
    signed main() {
        int t;cin >> t;
        while (t--) {
            int n;
            cin >> n;
            if (n > 45) {
                cout << -1 << "\n";
                continue;
            }
            string s = "";
            for (int i = 9; i >= 1; i--) {
                if (n <= 9 && n <= i) {
                    s += to_string(n);
                    n = 0;
                    break;
                } else {
                    s += to_string(i);
                    n -= i;
                }
            }
            if (n) {
                cout << -1 << endl;
                continue;
            }
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
