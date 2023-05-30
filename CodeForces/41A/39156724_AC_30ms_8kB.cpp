#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {

}
int main() {
    FAST();

    string a, b;
    cin >> a >> b;

    bool d = 1;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[a.size() - 1 - i])
        {
            d = 0;
            break;
        }
    }
    if (d)cout << "YES";
    else cout << "NO";
}