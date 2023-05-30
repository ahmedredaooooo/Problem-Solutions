//
// Created by ahmed on 1/12/2023.
//
/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

ll arr[3000];

int main() {
    sad;
    int n;
    cin>>n;
    for(int i = 2 ;i <= n; i++)
        if(arr[i] == 0)
            for(int j = i;j <= n;j += i)
                arr[j]++;

    int c=0;
    for(int i =2;i<=n;i++)
        if(arr[i] == 2)
            c++;

    cout << c << "\n";

}