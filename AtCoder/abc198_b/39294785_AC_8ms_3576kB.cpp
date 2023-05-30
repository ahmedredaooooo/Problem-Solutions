#include <bits/stdc++.h>
using namespace std;
int main() {
    int cnt = 0;
    string s;
    cin >> s;
    ;
    for(int i=s.size()-1;i>=0;i--){

        if(s[i]=='0')
            s.pop_back();
        else
            break;
    }

    string rev=s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}