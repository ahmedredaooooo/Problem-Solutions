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



int main() {
    cin.tie(0),cin.sync_with_stdio(0);
    int n;
    int k;
    cin >> n >> k;
    int arr[n+5];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr[(i+k)%n]<<" ";
    }
}

