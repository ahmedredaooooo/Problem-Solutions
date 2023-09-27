#include <bits/stdc++.h>
using namespace std;
#define int long long
void Solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
        if (b == 1 || n % b == 1)
            return void(cout << "YeS");
        else
            return void(cout << "NO");
        
    int x = 1;
    while (x <= n)
        if ((n - x) % b == 0 || (n - x - b) % b == 0)
            return void(cout << "YeS");
        else x *= a;

    cout << "nO";
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);
    int t;cin >> t;
    while (t--)Solve(), cout << "\n";

}
