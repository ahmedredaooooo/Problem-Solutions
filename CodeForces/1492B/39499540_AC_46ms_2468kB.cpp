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
    Test {
        priority_queue<pair<int, int>> pq;
        int n;
        cin >> n;
        int arr[n + 9];
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            pq.push({arr[i], i});
        }
        int mn = 10e7;
        while (pq.size()) {
            int imx = pq.top().second;
            pq.pop();
            if (imx < mn) {
                v.push_back(imx);
                        mn = imx;
            }
        }
        int prv = n ;
        for (int i = 0; i < v.size(); ++i) {
            if (i)
                prv = v[i - 1];
            for (int j = v[i]; j < prv; ++j)
                cout << arr[j] << " ";
        }

        cout << el;

    };
}
