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


 
string s,t;
ll tt,n,m;
 
cin>>tt;
	while(tt--){
		int f=0;
		cin>>s>>t;
		for(int i=0;i<s.size();i++){
			string s1=s.substr(0,i+1),s2=s.substr(0,i);
			reverse(s2.begin(),s2.end());
			s1+=s2;
			if(s1.find(t)!=-1){
				f=1;
				break;
			}
		}
		cout<<(!!f?"YES":"NO")<<endl;
	}

}
int main() {
    FAST();
     solve();
}