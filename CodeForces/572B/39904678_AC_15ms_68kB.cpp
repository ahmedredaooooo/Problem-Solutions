#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad
    char d;
    int n, s, p, q;
    cin >> n >> s;
    map<pair<char, int>, int> mp;
    vector<int> buy;
    vector<int> sell;
    for (int i = 0; i < n; i++) {
        cin >> d >> p >> q;
        if (d == 'B') {
            if (!mp[{d, p}])
                buy.push_back(p);
            mp[{d, p}] += q;
        } else {
            if (!mp[{d, p}])
                sell.push_back(p);
            mp[{d, p}] += q;
        }
    }

    sort(buy.begin(), buy.end(), greater<int>());
    sort(sell.begin(), sell.end());

    priority_queue<pair<int, pair<char, int>>> pq;
    int bsize = buy.size();
    for (int i = 0; i < min(s, bsize); i++) {
        pq.push({buy[i], {'B', mp[{'B', buy[i]}]}});
    }
    bsize = sell.size();
    for (int i = 0; i < min(s, bsize); i++) {
        pq.push({sell[i], {'S', mp[{'S', sell[i]}]}});
    }

    while (!pq.empty()) {
        pair<int, pair<char, int>> tmp = pq.top();
        pq.pop();
        cout << tmp.second.first << " " << tmp.first << " " << tmp.second.second << "\n";

    }
}
