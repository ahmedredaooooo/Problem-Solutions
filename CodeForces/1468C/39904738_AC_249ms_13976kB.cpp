#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad
    int t;
    cin >> t;
    priority_queue<pair<int, int>> pq;
    int cnt = 1;
    int st = 1;
    map<int, int> mp;
    while(t--)
    {
        int op, x;
        cin >> op;
        if(op == 1)
        {
            cin >> x;
            pq.push({x, -cnt});
            cnt++;
        }
        else if(op == 2)
        {
            while(mp[st])
                st++;
            cout << st << " ";
            mp[st]++;
        }
        else
        {
            while(mp[-pq.top().second])
                pq.pop();
            cout << -pq.top().second << " ";
            mp[-pq.top().second]++;
        }
    }
}
