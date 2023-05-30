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
    int n,x,y,max=0,min=INT8_MAX;
    cin>>n;
    int arr[n];
    loop(n) {
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i],x=i;

        if(min>=arr[i])
            min=arr[i],y=i;

    }
    if(y<x) cout<<x+(n-y-1)-1;
    else cout<<x+(n-y-1);

}