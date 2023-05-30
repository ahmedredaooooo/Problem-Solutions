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
    vector<int> a, b, c;
    int n, x;
    cin >> n;
    for(int i = 0; i< n; i++)
    {
        cin >> x;
        if(x == 1)
            a.push_back(i+1);
        else if(x == 2)
            b.push_back(i+1);
        else
            c.push_back(i+1);
    }

    int mx = min(a.size(), min(b.size(), c.size()));
    cout << mx << el;
    for(int i = 0; i< mx; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << el;
    }



}
