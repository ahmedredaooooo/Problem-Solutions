#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(i, n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}



int main() {
    cin.tie(0),cin.sync_with_stdio(0);
    int i = 0;
    deque<int>dq;
    Test{
        string s;
        cin >> s;
        if (s == "toFront" && i % 2 == 0) {
            int n;
            cin >> n;
            dq.push_front(n);
        } else if (s == "toFront" && i % 2 == 1) {
            int n;
            cin >> n;
            dq.push_back(n);
        } else if (s == "push_back" && i % 2 == 0) {
            int n;
            cin >> n;
            dq.push_back(n);
        } else if (s == "push_back" && i % 2 == 1) {
            int n;
            cin >> n;
            dq.push_front(n);
        } else if (s == "front" && !dq.empty() && i % 2 == 0) {
            cout << dq.front() << el;
            dq.pop_front();
        } else if (s == "back" && !dq.empty() && i % 2 == 0) {
            cout << dq.back() << el;
            dq.pop_back();
        } else if (s == "front" && !dq.empty() && i % 2 == 1) {
            cout << dq.back() << el;
            dq.pop_back();
        } else if (s == "back" && !dq.empty() && i % 2 == 1) {
            cout << dq.front() << el;
            dq.pop_front();
        } else if (s == "reverse") {
            i++;
        } else
            cout << "No job for Ada?\n";
    };
}

