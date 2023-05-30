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

    int n,l,r;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>l>>r; 
    for(int i=l-1; i<=(r-1); i++)
        cout<<arr[i]<<" ";
    cout<<el;
}
int main(){
    FAST();
     solve();
}