#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)



int main() {
    sad;
    int n, x;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans += abs(x);
    }

    cout << ans << "\n";
}
