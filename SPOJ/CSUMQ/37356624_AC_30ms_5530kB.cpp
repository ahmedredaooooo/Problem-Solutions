#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define el endl
#define IOS ios_base::sync_with_stdio(false)
void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void fn(int arr[],int i,int n)
{
if(i==n)return;
else if(i%2==0)
{
    fn(arr,i++,n);
    cout<<arr[i]<<" ";

}
else
    fn(arr,i++,n);
}
//
int main()
{
   FAST();
   int n;
   cin>>n;
   int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    int pre[n+1];
    pre[0]=0;
    for (int i =0; i < n; ++i) {
        pre[i+1]=ar[i]+pre[i];
    }
    int t;cin>>t;
    while (t--)
    {
        int i,j;
        cin>>i>>j;
        cout<<pre[j+1]-pre[i]<<el;
    }
}

// 0 1 2
// 1 4 1