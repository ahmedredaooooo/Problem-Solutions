#include <bits/stdc++.h>

using namespace std;

string toBinary(int n)
{
    string s = "";

    while (n)
        s += (char)((n & 1) + '0'), n/=2;

    reverse(s.begin(), s.end());

    while (s.size() < 30)
        s = '0' + s;

    return s;
}

#define int long long
void Solve()
{
    int n, end = 30;cin >> n;
    vector<int>v(end);
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        string s = toBinary(x);

        for (int j = 0; j < end; ++j)
            if (s[j] == '1')
                v[j]++;

    }
    reverse(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int cur = 0;
        for (int j = 0, c = 1; j < end; ++j, c *= 2)
            if (v[j]-- > 0)
                cur += c;

        ans += cur * cur;
    }

    cout << ans;
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Solve(), cout << "\n";
    return 0;
}

