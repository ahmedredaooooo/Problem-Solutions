#include <bits/stdc++.h>
using namespace std;
string s, t;

vector<vector<int>>dp;

int Solve(int i, int j)
{
    if (i == s.size() || j == t.size())
        return 0;
    
    int &ret = dp[i][j];
    if (~ret)return ret;
    
    if (s[i] == t[j])
       return ret = 1 + Solve(i + 1, j + 1);
    return ret = max(Solve(i + 1, j), Solve(i, j + 1));
}
signed main()
{
   cin >> s >> t;
   dp = vector<vector<int>>(s.size() + 1, vector<int>(t.size() + 1, -1));
   int x = Solve(0, 0) ;

   string ans = "";
   
    int i = 0, j = 0;
    while (i < s.size() && j < t.size())
        if (s[i] == t[j])
            ans += s[i], i++, j++;
        else
            if (dp[i + 1][j] > dp[i][j + 1])
                i++;
            else
                j++;
   cout << ans;
}