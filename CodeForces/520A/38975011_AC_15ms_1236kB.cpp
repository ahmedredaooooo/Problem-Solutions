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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool count[26]={0};
    for(int i=0;i<n;i++){
        if(s[i]<97){
            s[i]+=32;
            count[s[i]-'a']=1;
        }
        else{
            count[s[i]-'a']=1;
        }

    }
    for(int i=0;i<26;i++){
        if(!count[i]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    FAST();
     solve();
}