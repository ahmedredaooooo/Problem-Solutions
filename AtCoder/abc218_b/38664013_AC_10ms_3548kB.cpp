#include <bits/stdc++.h>

using namespace std;
int main() {
    int p;

    for (int i = 0; i < 26; i++)
    {
        cin >> p;
        cout<<char('a' + (p - 1));
    }
 
    return 0;
}