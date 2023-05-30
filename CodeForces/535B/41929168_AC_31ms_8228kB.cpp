#include <bits/stdc++.h>
using namespace std;
#define int long long
int a, b;
vector<int>luckey;
void generateLuckey(int n = 0) {
    if (n > 1000000000)
        return;
    luckey.push_back(n);
//    cout << n << " ";
    generateLuckey(n * 10 + 4);
    generateLuckey(n * 10 + 7);
}

signed main() {
    generateLuckey();
    std::cin >> a;
    sort(luckey.begin(), luckey.end());
    for (int i = 0; i < luckey.size(); ++i) {
        if (a <= luckey[i])
        {
            cout << " \n" << i;
            break;

        }
    }
}
