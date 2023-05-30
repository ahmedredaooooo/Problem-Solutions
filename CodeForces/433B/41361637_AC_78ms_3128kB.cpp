///*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#else
#define debug(...) 1
#define Time(i, x...) x
#endif

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define ll  long long
#define int ll
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);
//int x = accumulate(all(v),0LL);
//partial_sum(all(v), v.begin);




void Solve() {
   ll n;
    cin>>n;
 
   ll arr[n],sorted[n];
   ll pre1[n+1],pre2[n+1];
    pre1[0]=0;pre2[0]=0;
 
    for (int i = 1; i <=n; ++i)
    {
        cin>>arr[i];
        sorted[i]=arr[i];
    }
    sort(sorted+1,sorted+n+1);
 
    for (int i = 1; i <= n; ++i) {
        pre1[i]=pre1[i-1]+arr[i];
        pre2[i]=pre2[i-1]+sorted[i];
    }
   ll tc;
    cin>>tc;
 
    while (tc--)
    {
       ll cho,l,r;
        cin>>cho>>l>>r;
        if(cho==1)cout<<pre1[r]-pre1[l-1]<<el;
        else    cout<<pre2[r]-pre2[l-1]<<el;
 
 
    }
}

signed main() {
    sad;
//    FILE
//    Test
        Solve(), cout << el;
}
