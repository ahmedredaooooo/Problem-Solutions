/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);

string tolower_String(string s) {
    string tmp= "";
    for (char& ch: s) {
        ch = towlower(ch);
        if (ch >= 'a' and ch <= 'z')
            tmp.push_back(ch);
        else
            return tmp;
    }
    return tmp;
}
bool IsLowerCharacter(char c) {
    return c >= 'a' && c <= 'z';
}

void Solve() {         // frq  num
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<string> ss;
    int n, num;
    cin >> n;
    while (n--) {
        string tmp;
        string x;
        cin >> x;
        if (x == "insert") {
            cin >> num;
            string tmp = "insert ";
            tmp += to_string(num);
            pq.push(num);
            ss.push_back(tmp);
        } else if (x == "removeMin") {
            if (pq.empty()) {
                pq.push(0);
                ss.push_back("insert 0");
            }
            pq.pop();
            ss.push_back("removeMin");
        } else {
            cin >> num;
            tmp = "getMin ";
            tmp += to_string(num);
            while (!pq.empty() && pq.top() < num) {
                ss.push_back("removeMin");
                pq.pop();
            }

            if (pq.empty() || (!pq.empty() && pq.top() != num)) {
                string kk = "insert ";
                kk += to_string(num);
                pq.push(num);
                ss.push_back(kk);
            }
            ss.push_back(tmp);
        }
    }
    cout << ss.size() << el;
    for (string x: ss)
        cout << x << el;

}

signed main() {
    sad;
//    FILE
//    Test
    Solve();

}
