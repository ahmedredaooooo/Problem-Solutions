#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;



int main()
{
    sad

        string s;
        cin>>s;
        stack<char> st;
        for(ll i=0;i<s.length();i++)
        {
            if(!st.empty()&&st.top()==s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        if(st.empty())
            cout<<"Yes"<<'\n';
        else
            cout<<"No"<<'\n';


}