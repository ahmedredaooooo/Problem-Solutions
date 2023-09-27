#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long

#define Test unsigned int TC; cin >> TC; while(TC--)

void solve(){

    ll a, b, c,n=8;
   char arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
        }
    }
    bool b1=1;
    for (int i = 0; i < n; ++i) {
       if(arr[0][i]!='R')
           b1=0;
    }
    bool b2=1;
    for (int i = 0; i < n; ++i) {
        if(arr[1][i]!='R')
            b2=0;
    }
    bool b3=1;
    for (int i = 0; i < n; ++i) {
        if(arr[2][i]!='R')
            b3=0;
    }
    bool b4=1;
    for (int i = 0; i < n; ++i) {
        if(arr[3][i]!='R')
            b4=0;
    }
    bool b5=1;
    for (int i = 0; i < n; ++i) {
        if(arr[4][i]!='R')
            b5=0;
    }
    bool b6=1;
    for (int i = 0; i < n; ++i) {
        if(arr[5][i]!='R')
            b6=0;
    }
    bool b7=1;
    for (int i = 0; i < n; ++i) {
        if(arr[6][i]!='R')
            b7=0;
    }
    bool b8=1;
    for (int i = 0; i < n; ++i) {
        if(arr[7][i]!='R')
            b8=0;
    }

    if(b1||b2||b3||b4||b5||b6||b7||b8)cout<<"R\n";
    else cout<<"B\n";


}
int main(){
   Test  solve();

}