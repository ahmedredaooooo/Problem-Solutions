// لا اله الا الله محمد رسول الله
#include <bits/stdc++.h>
 
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
 
int main() {
    sad;;
    int n;  cin >> n;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
        if(i == 1) {
            cout << -1;
            return 0;
        }
    }
    
    cout << 1 ;
}