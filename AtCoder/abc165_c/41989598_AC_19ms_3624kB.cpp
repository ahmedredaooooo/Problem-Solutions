/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;

int n, m, q, mx = -1;
vector<vector<int>>v;
vector<int>A, t;

void check() {
    int d = 0;
    for (int i = 0; i < q; ++i) {
        if (A[v[i][1]-1] - A[v[i][0]-1] == v[i][2])
            d += v[i][3];
    }
    if (d > mx) {
        t = A;
        mx = d;
    }
}
void f(int index) {
    if (index == n + 1) {
        check();
        return;
    }
    for (int i = A[index - 1]; i <= m; ++i) {
        A[index] = i;
        f(index + 1);
    }
}

int main() {
    cin >> n >> m >> q;
    A.resize(n+1);t.resize(n+1);
    v = vector<vector<int>>(q, vector<int>(4));
A[0] = 1;
t[0] = 1;
    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> v[i][j];
        }
    }
    f(1);

    cout << mx;
    
}
