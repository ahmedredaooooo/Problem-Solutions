#include <bits/stdc++.h>
using namespace std;

vector<int>v(1);
void pre()
{
    for (int i = 1; v.size() <= 1003; ++i)
        if (!(i % 3 == 0 || i % 10 == 3))v.push_back(i);

}

void Solve()
{
    int k;cin >> k;
    cout << v[k];
}

signed main()
{
pre();
int t;cin >> t;
    while (t--)Solve(), cout << '\n';
}