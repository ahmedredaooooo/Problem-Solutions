// لا اله الا الله محمد رسول الله
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad;
    Test{
        int n;
        cin >> n;
        int arr[n+3];
        for(int i = 0; i< n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;

        for(int i = 0; i< n-1; i++)
        {
            int mx = max(arr[i], arr[i+1]);
            int mn = min(arr[i], arr[i+1]);

            while(mn*2 < mx)
            {
                mn *= 2;
                ans++;
            }
        }
        cout << ans << "\n";
    }

}