/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

ll mod = 1e9 + 7;


string s, st = "";
int n, l, r, k;
int arr[1000006][10];

string solve(int num, int sum = 0) {
    if(num == s.size() || s[num] == '.')
        return "";
    return s[num] + solve(num+1);
}


int main ()
{
    sad;;;
    cin >> s;
   cout << solve(0);
}