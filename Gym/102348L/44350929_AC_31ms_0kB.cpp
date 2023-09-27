#include <bits/stdc++.h>
using namespace std;
#define int long long
void Solve()
{
    // time = 4 * n * n, n = 1000
    string in[2];
    pair<int, int> ans;
    int n, k, mn = 2e15;
    cin >> n >> k >> in[0] >> in[1];
    for (int i = 0; i < 2; ++i)
        for (int j = 0, mx = 0; j < n; ++j)
        {
            mx = 0;
            for (int l = 0; l < n; ++l)
            {
                if (in[i][l] == '1')mx = max(mx, abs(j - l));
                if (in[1 - i][l] == '1')mx = max(mx, k + j + l + 2);
            }
            if (mn > mx)
                mn = mx, ans.first = 2 - i, ans.second = j + 1;
        }


    cout << mn << '\n' << ans.first << ' ' << ans.second;

}

signed main()
{

        Solve(), cout << "\n";
}