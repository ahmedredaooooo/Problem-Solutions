

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
    for (int i = 0; i < n; ++i) {
        int l,r,c=0;cin>>l>>r;
        for (int j = l; j <= r; ++j) {
            if(j%10==3||j%10==2||j%10==9)c++;
        }
        cout<<c<<el;
    }
}
// Ahmed Reda OOOOO
// 0 1 2
// 1 4 1