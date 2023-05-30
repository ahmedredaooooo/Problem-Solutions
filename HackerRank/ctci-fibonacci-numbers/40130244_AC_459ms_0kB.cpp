#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
//#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())



vector <int>nums;
ll fun(ll n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fun(n - 1) + fun(n - 2);
}


int main()
{

    sad;;
    ll n;
    cin >> n;
    cout << fun(n);
}

