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

void solve() {}

bool almostP(int n){
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            while(n % i == 0)   n /= i;
            cnt++;
        }
    }
    return cnt == 2;
}
int main(){
    Test {
        int n, d;
        cin >> n >>d;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        if( arr[0]+ arr[1] <= d or arr[n-1] <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}




























/*
 * ll n, m;
ll a[n], b[m];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    sort(a, a + n);
    ll  ans[m];
    for (int i = 0; i < n; ++i) {
        ll start = 0, end = m - 1, c = 0;
        while (start < end) {
            ll mid = (start + end)/2;
            if(a[i] <= b[mid])
                ans[c] = i + 1;
            else
                end = mid - 1;
        }
        c++;
    }

    for (int i = 0; i < m; ++i) {
        cout << ans[i]<< " ";
    }

 */
