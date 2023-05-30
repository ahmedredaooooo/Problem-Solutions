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
    int n, x, z;
    z = 0;
    vector<int> pos, neg;
    cin >> n;
    for(int i = 0; i< n; i++)
    {
        cin >> x;
        if(x > 0)
            pos.push_back(x);
        else if(x < 0)
            neg.push_back(x);
        else
            z++;
    }
    cout << "1 " << neg.back() << "\n";
    neg.pop_back();

    if(pos.size())
    {
        cout << "1 " << pos.back() << "\n";
        pos.pop_back();
    }
    else
    {
        cout << "2 ";
        int c = 2;
        while(c--)
        {
            cout << neg.back() << " ";
            neg.pop_back();
        }
        cout << el;
    }

    cout << neg.size() + pos.size() + z << " ";
    while(z--)
    {
        cout << "0 ";
    }
    for(int y: pos)
        cout << y << " ";
    for(int y: neg)
        cout << y << " ";
    cout << el;
}