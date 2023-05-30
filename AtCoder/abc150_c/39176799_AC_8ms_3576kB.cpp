#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}
int main() {
    int n,k = 0, l = 0;
    cin>>n;
    int arr[n],ar[n];
    loop(n) cin>>arr[i];
    do{
        k++;
    }while(prev_permutation(arr,arr+n));

    for(int i=0;i<n;i++) cin>>ar[i];

    do {
        l++;
    }while(prev_permutation(ar,ar+n));

    cout<<abs(l-k);
}