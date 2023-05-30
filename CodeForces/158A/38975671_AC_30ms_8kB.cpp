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
// 1  4  7                                     i+=3
//012345678
//{a, b, c}

void solve(){
    int arr[51];
    int n,k,c=0;
    cin >> n>>k;
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    
    for (int i = 0; i < n; i++)
     if (arr[i] >= arr[k-1] && arr[i] != 0)
            c++;
    
    cout << c;
}
int main() {
    FAST();
     solve();
}