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


void solve(){}



int main()
{
    FAST();
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n;
        deque<int>dq;
        for(int i = 0; i< n; i++)
        {
            cin >> x;
            dq.push_back(x);
        }
        vector<int> res;
        for(int i = 0; i< n; i++)
        {
            int cnt = 0;
            while(dq.back() != dq.size())
            {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            res.push_back(cnt);
            dq.pop_back();
        }

        reverse(res.begin(), res.end());
        for(int y : res)
            cout << y << " ";
        cout << "\n";
    }

}
