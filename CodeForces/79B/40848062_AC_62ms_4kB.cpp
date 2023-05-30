//
// Created by ahmed on 1/17/2023.
//
/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
const ll MOD = 1e9 + 7;


int n, m, k, t;
vector<vector<char>>arr;
vector<pair<int, int>>vp;

int main() {
    cin >> n >> m >> k >> t;
    //arr.resize(n+1,vector<char>(m+1));


    while (k--) {
        int i, j;
        cin >> i >> j;
//        arr[i][j] = 'w';
        vp.push_back({i, j});
    };
    sort(vp.begin(), vp.end());

    while (t--) {
        int A, B;
        cin >> A >> B;
        pair<int, int> pr = {A, B};

        auto it = lower_bound(vp.begin(), vp.end(), pr);
        if (it == vp.end())
            it--;
        if ((*it).first > A)
            it--;
        if ((*it).first == A) {
            if ((*it).second > B) {
                it--;
            }
            else if ((*it).second == B) {
                cout << "Waste" << "\n";
                continue;
            }
        }

        int indx = (int)(it - vp.begin());


        int total = (A - 1) * m + B;
        int rem = (total - indx - 1) % 3;
        if (rem == 1)
            cout << "Carrots\n";
        if (rem == 2)
            cout << "Kiwis\n";
        if (!rem)
            cout << "Grapes\n";
    }
//
//
//    int x = 0;
//
//    for (int l = 1; l <= n; ++l) {
//        for (int i1 = 1; i1 <= m; ++i1) {
//            if (arr[l][i1] != 'w') {
//                if (x % 3 == 0)
//                    arr[l][i1] = 'c';
//                if (x % 3 == 1)
//                    arr[l][i1] = 'k';
//                if (x % 3 == 2)
//                    arr[l][i1] = 'g';
//                x++;
//            }
//        }
//    }
//
//    while (t--) {
//        int i, j;
//        cin >> i >> j;
//        if (arr[i][j] == 'w')
//            cout << "Waste\n";
//        if (arr[i][j] == 'c')
//            cout << "Carrots\n";
//        if (arr[i][j] == 'k')
//            cout << "Kiwis\n";
//        if (arr[i][j] == 'g')
//            cout << "Grapes\n";
//    }

//    for (int l = 1; l <= n; ++l) {
//        for (int i1 = 1; i1 <= m ; ++i1) {
//            cout << arr[l][i1] << " ";
//        }
//        cout << el;
//    }
}

/*
0       waste
1       carrot
2       kiwi
3       grapes
 */