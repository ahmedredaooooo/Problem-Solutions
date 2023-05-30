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

int main() {
    FAST();
    int n,m,res=0;cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i]>m)res+=2;
        else res++;
    }


    cout<<res;

}




// working :-
//    ll n, s = 0;
//    cin >>n;
//    ll arr[n];
//    for (ll i = 0; i < n; ++i) {
//        cin >> arr[i];
//        s += arr[i];
//    }
//    ll x,ans, c =0;
//    cin >>x;
//    ans = x / s ;
//    ans *= s;
//    c = x/s *n;
//
//    for (ll i = 0; i < n; ++i) {
//        if(ans<x){
//            ans+=arr[i];
//            c++;
//
//        }
//
//        else break;
//    }
//    if(x==ans)c++;
//cout << c;





//
//  ll n, s = 0;
//  cin >>n;
//  ll arr[n];
//    for (ll i = 0; i < n; ++i) {
//        cin >> arr[i];
//        s += arr[i];
//    }
//    ll x,ans, c =0;
//    cin >>x;
//    while(x < ans) {
//        ans += s;
//        c++;
//    }
//    c*=n;
//    for (int i = 0; i < n; ++i) {
//        if (x>=ans)break;
//
//    }
//
//}




























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
