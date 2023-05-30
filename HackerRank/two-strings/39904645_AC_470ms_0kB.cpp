#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    Test {
        map<char, int>mp;
        string s, ss;
        cin >> s >> ss;
        set<char> st;
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]]++;
        }
        bool x =0;
        for (int i = 0; i < ss.size(); ++i) {
            if (mp[ss[i]])
            {
                x=1;
                break;
            }
        }
        if (!x)
            cout << "NO\n";
        else
            cout << "YES\n";
      //  cout<<ss.size() << s.size() << st.size()<<el;
    }
}

//ll n, m;
//ll arr[12][12];
//bool valid(ll x, ll y)
//{
//    return x >= 0 && x < n && y >= 0 && y < m;
//}
//
//ll rec(ll x, ll y)
//{
//    if(x == n-1 && y == m-1)
//        return 0;
//    ll op1, op2;
//
//    if(valid(x+1, y))
//        op1 = rec(x+1, y) + arr[x][y];
//    if(valid(x, y+1))
//        op2 = rec(x, y+1) + arr[x][y];
//
//    return max(op1, op2);
//}
//
//
//int main ()
//{
//
//    cin >> n >> m;
//    for(ll i = 0; i< n; i++)
//    {
//        for(ll j = 0; j< m; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    cout << rec(0 , 0) + arr[0][0]<< "\n";
//    return 0;
//}
//

// 2 1 1
//long long mod = 1e9+7;
//int main() {
//    long long tc, n , c=0;
//    cin >>tc;
//    while(tc--) {
//        c=0;
//        cin >> n;
//        for(int w = 0;w <= n; ++w ) {
//            for(int x = 0;x <= w; ++x ) {
//                for(int y = 0;y <= x; ++y ) {
//                    for(int z = 0;z <= y; ++z ) {
//                        if(w + 2 * x * x + 3 * y * y * y + 4 * z * z * z * z == n)
//                            c++;
//                    }
//                }
//            }
//        }
//        cout<<c<<endl;
//    }
//
//}
//    }
//    cout << "\n";
//    for (int i = 0; i < v2.size(); ++i) {
//        cout << v2[i]<<" ";
//    }
//
//
//





    //problem L
     /*long long a, b, c, x, upgrade_A = 1.0, upgrade_B = 1.0, upgrade_C = 1.0;
    cin >> a >> b >> c;
    x = abs(a - b);
    upgrade_A = pow(10,b * log(a));
    upgrade_B = pow(10,a * log(b));
    upgrade_C = pow(10,x * log(c));

    cout << upgrade_A % mod << " " << upgrade_B % mod << " " << upgrade_C % mod;
*/
    //    upgrade_A = (b % mod * log(a) % mod);
//    upgrade_B = (a % mod * log(b) % mod);
//    upgrade_C = (x % mod * log(c) % mod);

//    for (int i = 1; i <= b; i++) {
//        upgrade_A = upgrade_A % mod * a % mod;
//        upgrade_A %= mod;
//    }
//
//    for (int i = 1; i <= a; i++) {
//        upgrade_B = upgrade_B % mod * b % mod;
//        upgrade_B %= mod;
//    }
//


//    *>*>*>
//    134679


//    for (int i = 1; i <= x; i++) {
//        upgrade_C = upgrade_C % mod * c % mod;
//        upgrade_C %= mod;
//    }
//    (long long)log(a) %mod;
//    cout << upgrade_A << " " << upgrade_B << " " << upgrade_C;
