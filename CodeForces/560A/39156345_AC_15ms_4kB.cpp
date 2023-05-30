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

void solve() {

}
int main() {
    FAST();
    int sizeOfArray;
    cin >> sizeOfArray;
    bool one = 0;
    int array[sizeOfArray];
    for (int i = 0; i < sizeOfArray; ++i) {
        cin >> array[i];
        if (array[i] == 1)
            one = 1;
    }
    cout << ((one)? -1:1);
}