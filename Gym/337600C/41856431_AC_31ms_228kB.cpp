#include <bits/stdc++.h>
//#include "SortedLinkedList.h"
using namespace std;
int main() {

string s;
cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'y')s[i]='e';
    }
cout << s;
    return 0;
}
