#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad
    char d;
    cin >> d;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    map<char, int> mpc;
    map<int ,char> mpi;

    for(int i = 0; i< s.size(); i++)
    {
        mpc[s[i]] = i;
        mpi[i] = s[i];
    }
    cin >> s;
    for(int i = 0; i< s.size(); i++)
    {
        int numc = mpc[s[i]];
        if(d == 'R')
            cout << mpi[numc-1];
        else
            cout << mpi[numc+1];
    }
    return 0;
}
