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
    short sizeOfArray;
    cin >> sizeOfArray;
    short array[sizeOfArray];
    for (int i = 0; i < sizeOfArray; ++i) {
        cin >> array[i];
    }
    sort(array, array + sizeOfArray);
    for (int i = 0; i < sizeOfArray; ++i) {
        cout << array[i]<<" ";
    }
}