#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0);
#define ll long long
#define ld long double
#define OO (ll)1e18
using namespace std;
const ll mod = 1e9 + 7;
const int N = 1e5 + 5;
ll freq[N];
int n;
ll mem[N];
bool isPrime(ll n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}
ll bpow(ll n, ll x)
{
    return x <= 0 ? 1 : bpow((n % mod) * (n % mod), x / 2) % mod * (x % 2 ? n : 1) % mod;
}
int power(int a, int p){
    if (p == 0)
        return 1;
    if (p % 2 == 1)
        return ((a % mod) * (power(a, p - 1) % mod)) % mod;
    ll c = power(a, p / 2) % mod;
    return(c * c) % mod;
}
ll GCD(ll a ,ll b)
{
    if(b == 0)
        return a;
    else
        return GCD(b , (a % b));
}
ll nCr(ll n , ll r)
{
    ll z = 1;
    for(ll i = 0 ; i < r ; i++){
        z *= (n - i);
        z /= (i + 1);
        z %= mod;
    }
    return z;
}
ll equ(ll a , ll b , ll c , bool mode)
{
    if(!mode)
        return (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    return (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
}
ll dp(ll num)
{
    if(num >= N)
        return 0;
    ll &ret = mem[num];
    if(~ret)
        return ret;
    ll ch1 = 0 , ch2 = 0;
    ch1 = dp(num + 1);
    ch2 = num * freq[num] + dp(num + 2);
    return ret = max(ch1 , ch2);
}
int main()
{
    fast
    memset(mem , -1 , sizeof mem);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        ll x;
        cin >> x;
        freq[x]++;
    }
    cout << dp(0) << "\n";
}