#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;


int main(){
sad
    stack<int> s;
    Test {
        int x; cin >> x;
        if(x == 1){
            cin >> x;
            s.push(x);
        }
        else if(x == 2){
            if(!s.empty())
                s.pop();
        }
        else{
            if(s.empty()) cout <<"Empty!\n";
            else cout <<s.top() <<el;
        }
    }
    return 0;
}
