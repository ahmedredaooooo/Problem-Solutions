/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

ll mod = 1e9 + 7;



int n, l, r, k;
int arr[1000006][10];

int solve(int num, int sum = 0) {
    if(sum + num >= n)
        return num;
    return solve(num + 1, sum+ num);
}


int main ()
{
    sad;;;
    cin >> n;
   cout << solve(1);
}