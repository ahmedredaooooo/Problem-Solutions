#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(i, n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}



int main() {
    cin.tie(0),cin.sync_with_stdio(0);
    Test {
        int n, c = 0;
        string st;
        cin >> n >> st;
        while (true) {
            bool change = 0;
            for (int i = 0; i < n - 1; ++i) {
                if (st[i] == 'A' && st[i + 1] == 'P') {
                    st[i + 1] = 'A';
                    change = 1;
                    i++;
                }
            }
            if (change)
                c++;
            else
                break;
        }
        cout << c <<el;
    };

}

