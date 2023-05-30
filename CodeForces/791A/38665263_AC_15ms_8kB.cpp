#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define el endl
#define IOS ios_base::sync_with_stdio(false)
void ahmedreda()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
void calc(int a,int b,int c){
 
if(a>b)
{
    cout<<c;
    return;
}
 
else
{
    calc(3*a,2*b,++c);
}
}
 
void solve()
{
    int a,b,c=0;
    cin>>a>>b;
    calc(a,b,c);
 
}
 
 
 
int main()
{
    ahmedreda();
    solve();
}