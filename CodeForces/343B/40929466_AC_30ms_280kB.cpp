
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


void Solve() {
    string s;
    cin>>s;
    stack<char> st;
    for(char & i : s)
    {
        if(!st.empty()&&st.top()==i)
            st.pop();
        else
            st.push(i);
    }
    if(st.empty())
        YES
    else
       NO
}
signed main() {
    sad;
//    Test
        Solve(), cout << el;

}
