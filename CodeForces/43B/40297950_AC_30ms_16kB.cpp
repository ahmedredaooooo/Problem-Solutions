/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

const ll MOD = 1e9 + 7;


string s1, s2;
int x = 0;
int c = 0;
map<char, int> m1;
map<char, int> m2;
int main() {
    getline(cin, s1);
    getline(cin, s2);


    for(int i = 0;i < s1.size();i++)
        if(s1[i] != ' ')
            m1[s1[i]]++;

    for(int i = 0;i < s2.size() ;i++)
        if(s2[i] != ' ')
            m2[s2[i]]++;

    for(auto i : m1)
        for(auto j : m2){

            if(i.first == j.first && i.second >= j.second)
                c++;
            else if(i.first == j.first && i.second <j.second){

                x = -1;
                break;

            }
        }


    if(x<0 || c != m2.size() )
        cout<<"NO";
    else if(x==0 && c == m2.size())
        cout<<"YES";

}
