#include <bits/stdc++.h>
//#include "SortedLinkedList.h"
#define  int long long
using namespace std;
signed main() {
int x, n, s = 0, l, r, mx = 0;
cin >> n >> l >> r;
    while (n--){
        cin >> x;
        if(x<=r && x >= l)s++;
        else s = 0;
        mx = max(mx, s);
    }
cout << mx;
    return 0;
}
