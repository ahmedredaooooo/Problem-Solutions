#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;

int main() {
    int n;cin>>n;
    queue<ll>q;
    vector<ll>v;
    priority_queue<ll>pq;
    int a;int x;
    while(n--){
        cin>>x;
        if(x==1){
            cin>>a;q.push(a);
        }
        if(x==2) {
            if(pq.empty()){
                cout << q.front()<<el;
                q.pop();
            }else{
                cout<<-pq.top()<<el;
                pq.pop();
            }
        }
        if(x==3){
/*
    sort(q.begin(),q.end());
*/
            while (!q.empty()){
                pq.push(-q.front());
                q.pop();
            }
        }
    }
}
