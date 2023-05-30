#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;

int main() {

    priority_queue<int,vector<int>,greater<>>pq;
    int n;cin >> n;
    ll cnt = 0, energy = 0;
    for (int i = 0; i < n; ++i) {
        int a ;cin >>a;
        if (a>=0)energy+=a,cnt++;
        else if (energy+a>=0){
            energy += a;
            cnt++;
            pq.push(a);
        }
        else {
            if (!pq.empty()){
                if (pq.top()<a){
                    cnt--;
                    energy-=pq.top();
                    pq.pop();
                    pq.push(a);
                    energy+=a;
                    cnt++;
                }
            }
        }
//        if(pq.size())
//            cout<<pq.top()<<el;
    }
    cout <<cnt<<el;
}