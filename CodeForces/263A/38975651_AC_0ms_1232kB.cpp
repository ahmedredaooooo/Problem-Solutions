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
    int arr[6][6],x,z,m=0;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {x = i; z = j;}
        }
    if (x == 1 || x == 5)
    {
        if (z == 1 || z == 5)m = 4;
        if (z == 2 || z == 4)m = 3;
        if (z == 3)m = 2;
    }
    else if (x == 2 || x == 4)
    {
        if (z == 1 || z == 5)m = 3;
        if (z == 2 || z == 4)m = 2;
        if (z == 3 )m = 1;
    }
    else if (x == 3) {
        if (z == 1 || z == 5)m = 2;
        if (z == 2 || z == 4)m = 1;
        if (z == 3)m = 0;
    }
    cout << m;
}
int main() {
    FAST();
     solve();
}