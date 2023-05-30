// لا اله الا الله محمد رسول الله
#include <bits/stdc++.h>
 
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
 
int main() {
    sad;;
     int n, k;
    cin >> n >> k;
 
    int arr[k+3];
    for(int i = 0; i< k; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr+k);
 
    int mn= 99999999;
 
    for(int i = 0; i+n-1 < k; i++)
    {
        mn = min(mn, arr[i+n-1] - arr[i]);
    }
 
    cout << mn << "\n";
}