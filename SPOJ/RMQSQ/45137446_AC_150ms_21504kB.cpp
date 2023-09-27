#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
//#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)

#define Test int TC; cin >> TC; while(TC--)

LL MERGE(LL x, LL y)
{
    return min(x, y);
}
template<class T>
struct SparseTable          /// 1-based
{
    size_t n, log;
    vector<T>arr, lg2;
    vector<vector<T>>table;
    SparseTable(size_t n, vector<T> &arr)
    {
        this->arr = arr;
        this->n = n;

        lg2 = vector<T>(n + 1);
        lg2[1] = 0;                        ///build the lg2
        for(int i = 2; i <= n; i++)
            lg2[i] = lg2[i >> 1] + 1;
        log = lg2[n];
        table = vector<vector<T>>(n + 1, vector<T>(log + 1));
        this->build();
    }

    void build()
    {
        for(int i = 1; i <= n; i++)
            table[i][0] = arr[i - 1];

        for(int j = 1; j <= log; j++)
            for(int i = 1; i + (1 << j) - 1 <= n; i++)
                table[i][j] = MERGE(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
    }

    T query(int l, int r)
    {
        int len = r - l + 1;
        int power = lg2[len];

        return MERGE(table[l][power], table[r - (1 << power) + 1][power]);
    }
};

void Solve()
{
    auto MERGE = [&](auto x, auto y){return min(x, y);};

    int n, q;
    cin >> n ;
    vector<int> arr(n);
    for (auto & _ : arr)
        cin >> _;
    SparseTable<LL> sparseTable(n, arr);
cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sparseTable.query(l + 1 , r + 1) << "\n";
    }

}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve();

    return 0;
}
