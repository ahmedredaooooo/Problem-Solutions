#include <bits/stdc++.h>
using namespace std;
# define ll long long


int main()
{

    ll k , n ;
    cin >> k >> n ;
    if (n <= (k + 1) / 2)
    {
        cout << n * 2 - 1 << endl;
    }
    else
    {
        cout << (n - (k + 1) / 2) * 2 << endl;
    }
}


