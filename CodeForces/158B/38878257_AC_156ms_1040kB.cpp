#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void solve(){

    int n;
    cin >> n;
    int a[5]={0},t;
    while(n--){
        cin >> t;
        a[t]++;
    }
    cout << a[4]+a[3]+(a[2]*2+max(a[1]-a[3],0)+3)/4;
}
int main(){
     solve();

}