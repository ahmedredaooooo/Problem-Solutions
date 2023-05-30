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
int n, tc, w, b;
cin >> n;

int arr[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    cin >> tc;
    while (tc--){
        cin >> w >> b;
        if (w < n)
        arr[w+1] += arr[w] - b;
        if (w > 1)
        arr[w-1] += b-1;
        arr[w] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<arr[i]<<"\n";
    }
}



//6
//3 9 4 6 7 5
//0 1 0 1 1 0
//5 7 6 4 9 3
//

int main() {
    FAST();
    solve();
}