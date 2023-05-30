// لا اله الا الله محمد رسول الله
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad;
    string s, k;
    cin >> s;
 
    bool z = 0;
    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] == '0' && !z)
        {
            z = 1;
            continue;
        }
 
        k.push_back(s[i]);
    }
 
    if(z)
        cout << k << "\n";
    else
    {
        s.pop_back();
        cout << s << "\n";
    }
}