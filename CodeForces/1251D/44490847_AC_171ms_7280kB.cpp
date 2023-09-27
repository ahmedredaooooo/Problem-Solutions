/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define FileI(fileName) freopen(#fileName, "r", stdin);

#define Test int TC; cin >> TC; while(TC--)

vector<pair <int ,int>>vp;
int n, s, tmpSum;

int check(int mid)
{
    int high = 0;
    for(auto & [l, r] : vp)     high += (l > mid);

    if (high > n / 2)
        return 2;


    vector<int>dif;
    int tmpHigh = high;
    for(auto & [l, r] : vp)
        if (l <= mid && r >= mid)
            high++, dif.push_back(mid - l);

    if (n - high > n / 2)
        return 3;



    sort(allc(dif));
    int ans = 0;
    for (int i = tmpHigh + 1; i <= n / 2 + 1; ++i)
    {
        ans += dif[i - tmpHigh - 1];
    }

    return tmpSum + ans <= s;
}


void Solve()
{
    cin >> n >> s;
    tmpSum = 0;

    vp = vector<pair <int ,int>>(n);
    for(auto & [l, r] : vp)cin >> l >> r, tmpSum += l;

    int st = 0, en = 2e10 + 10, mid, ans, tmp;//en = 2e5 + 5
    while (st <= en)
    {
        mid = (st + en) / 2;
        tmp = check(mid);
        if(tmp == 1 || tmp == 2)
        {
            if (tmp & 1)
                ans = mid;
            st = mid + 1;
        }
        else en = mid - 1;
    }
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Test Solve(), cout << "\n";
    return 0;
}
/*
            *      ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *
          |\___/|
          )     (             .              '
         =\     /=
           )===(       *
          /     \
          |     |
         /       \
         \       /
  _/\_/\_/\__  _/_/\_/\_/\_/\_/\_/\_/\_/\_/\_
  |  |  |  |( (  |  |  |  |  |  |  |  |  |  |
  |  |  |  | ) ) |  |  |  |  |  |  |  |  |  |
  |  |  |  |(_(  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
*/