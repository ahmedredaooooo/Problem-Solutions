#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())



vector <int>nums;
ll fun(ll n) {
    if (n == nums.size()-1)
    {
        return nums[n];
    }
    return nums[n] + fun(n + 1);

}


int main()
{

    sad;;
    int c = 1;
    Test{
       ll n;
       cin >> n;
       nums.resize(n);
       for (size_t i = 0; i < n; i++)
       {
           cin >> nums[i];
       }
       cout << "Case " << c++ << ": " << fun(0) << el;
    }
}

