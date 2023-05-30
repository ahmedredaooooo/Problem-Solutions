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

int solve(int num) {
    if(num % 10 == num)
        return num;

    int  h = 1;
    while(num) {
        if(num % 10)
            h *= (num % 10);
        num /= 10;
    }
    return solve(h);
}


int main ()
{
    sad;;;
    for(int i = 0; i <= 1000000; i++) {
        arr[i][solve(i)]++;
    }


    for(int i = 1; i <= 9; i++) {
        for(int j = i; j <= 1000000; j++) {
            arr[j][i] += arr[j - 1][i];
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l >> r >> k;
        cout << arr[r][k] - arr[l - 1][k] << el;
    }

}