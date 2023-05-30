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
 
 
void solve()
{
    deque<int>q1;
    deque<int>q2;
    int n,m;
    cin>>n>>m;
 
    for (int i = 1; i <= n; ++i) {
        int x;cin>>x;
        q1.push_back(x);
        q2.push_back(i);
    }
    int v=0;
    while(!q1.empty())
    {
        if(q2.size()==1){
            cout<<q2.front();break;
        }
        q1.front()-=m;
        if(q1.front()<1){
            q1.pop_front();
            q2.pop_front();
        }
        else{
            q1.push_back(q1.front());
            q1.pop_front();
            q2.push_back(q2.front());
            q2.pop_front();
        }
    }
 
}
 
 
 
int main()
{
    FAST();
    solve();
}