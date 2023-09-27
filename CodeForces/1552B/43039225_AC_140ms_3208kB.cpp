#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, dx = 1, c;cin >> n;

    vector<pair<vector<int>, int>>v(n, pair<vector<int>, int>(vector<int>(5), 0));
    for(auto &[vec, idx] : v)
    {
        idx = dx++;
        for(auto &i : vec)
            cin >> i;
    }

    sort(v.begin(), v.end(), [&](auto l, auto r){
        c = 0;
        for (int i = 0; i < 5; ++i) {
            if (l.first[i] < r.first[i])
                c++;
        }
        return c >= 3;
    });

    for(int i = 1; i < n;++i)
    {
        c = 0;
        for (int j = 0; j < 5; ++j) {
            if (v[0].first[j] < v[i].first[j])
                c++;
        }
        if (c < 3)
            return void(cout <<"-1");
    }
    cout << v[0].second;
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);
    int t;cin >> t;
    while (t--)Solve(), cout << "\n";

}
