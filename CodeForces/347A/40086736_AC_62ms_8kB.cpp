#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)


void solve()
{
    int n, a[1007];

        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        swap(a[0], a[n - 1]);
        for (int i = 0; i < n; i++)
            cout << a[i] <<" ";
}


int main()
{
    sad;;
    solve();
    return 0;
}