//
// Created by ahmed on 1/16/2023.
//
/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
const ll MOD = 1e9 + 7;

void accumelateArray(vector<int>&v, int idx) {
    if (idx == v.size())
        return;

    v[idx+1] = max(v[idx], v[idx+1]);
    accumelateArray(v, idx + 1);
}

bool solve(string s, int idx) {
    if (idx == s.size())
        return true;

    return ((s[idx] >= 'A' && s[idx] <= 'Z' && idx % 2) || (s[idx] >= 'a' && s[idx] <= 'z' && idx % 2 == 0)) && solve(s, idx + 1);


}

int main() {
    string s;
    cin >> s;
    if (solve(s, 0))
        cout << "Yes\n";
    else
        cout << "No\n";

}