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
  	string s; cin >> s;
	if (s[0] >= 'a' && s[0] <= 'z')s[0] += 'A' - 'a';
	cout << s;

}
int main(){
    FAST();
     solve();
}