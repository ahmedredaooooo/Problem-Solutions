#include <iostream>
#include <set>
using namespace std;
int main() {
	
    string s;
    cin >> s;
    if (s[0] == s[1] && s[0] == s[2])cout << "Won";
    else cout << "Lost";

}