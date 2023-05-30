/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";

map<string, int>mp;
string conc(string s)
{
    string st = s + to_string(mp[s]);
    mp[st]++;
    return st;
}
void Solve() {
    string s;
    cin >> s;
    if (mp[s] == 0)
    {
        cout << "OK\n";
    }
    else
    {
        cout << conc(s);
    }
        mp[s]++;


}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);
    Test
    Solve(), cout << el;

}
