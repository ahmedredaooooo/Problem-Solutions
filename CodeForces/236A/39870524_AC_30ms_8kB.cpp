#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define el endl
const  ll N = 1e5+10;
void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
 
 

 
 
void solve() {
   string s;cin>>s;
 
   int freq[26]={};
    for (int i = 0; i < s.size(); ++i) {
        freq[s[i]-'a']++;
    }
    int c=0;
    for (int i = 0; i < 26; ++i) {
        if(freq[i]>0)c++;
    }
    if(c%2)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
 
}
int main()
{
    FAST();
    solve();
}