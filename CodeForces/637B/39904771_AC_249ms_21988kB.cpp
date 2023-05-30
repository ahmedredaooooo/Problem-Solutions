#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad
    int n;
    cin >> n;
    string arr[n+3];
    for(int i = 0; i< n; i++)
        cin >> arr[i];

    map<string, bool> mp;
    for(int i = n-1; i>=0; i--)
    {
        if(!mp[arr[i]])
            cout << arr[i] << "\n";

        mp[arr[i]] = 1;
    }

}
