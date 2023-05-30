#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve(){
int n, k;
cin >> n >> k;

int a[n],b[n];

    for (int i = 0; i < n; ++i) {
        cin>> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin>> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);

    for (int i = 0; i < k; ++i) {
        if(a[i]<b[n-1-i])
        a[i] = b[n-i-1];
    }

    int sm =0;
    for (int i = 0; i < n; ++i) {
        sm += a[i];
    }
    cout<< sm << el;
}



//6
//3 9 4 6 7 5
//0 1 0 1 1 0
//5 7 6 4 9 3
//

int main() {
    FAST();
   Test solve();
}