// لا اله الا الله محمد رسول الله
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad;;;;;;;;;;;;;;
    Test {
    int n, k;
        cin >> n >> k;
        int arr[n+3];
        for(int i = 0; i< n; i++)
            cin >> arr[i];
 
        for(int i = 0; i< n-1; i++)
        {
            if(k >= arr[i])
            {
                arr[n-1] += arr[i];
                k -= arr[i];
                arr[i] = 0;
            }
            else
            {
                arr[i] -= k;
                arr[n-1] += k;
                break;
            }
        }
 
        for(int i = 0; i< n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}