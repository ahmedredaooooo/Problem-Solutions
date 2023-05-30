#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;


int main(){
sad
    queue<int> q;

    Test {
        int x; cin >> x;
        if(x == 1){
            cin >> x;
            q.push(x);
        }
        else if(x == 2){
            if(!q.empty())
                q.pop();
        }
        else{
            if(q.empty()) cout << "Empty!\n";
            else cout << q.front() << el;
        }
    }
    return 0;
}
