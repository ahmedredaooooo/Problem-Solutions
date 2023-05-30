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

void solve() {

}
int main() {
    FAST();
    set<int> s;
    int a;
    for(int i=0;i<4;i++)
    {cin>>a;
        s.insert(a);}
    cout<<(4-s.size());
}