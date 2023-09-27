/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

const ld PI = acos(-1);

ld MinutesToDegree(ld minutes)
{
    return minutes / 60;
}

ld degToRad(ld deg)
{
    return deg * PI / 180;
}

ld radToDeg(ld rad)
{
    while (rad < 0)
        rad += 2 * PI;
    return rad * 180 / PI;
}

ld getDistanceBetween2Points(ld ax, ld ay, ld bx, ld by)
{
    return sqrt((ay - by) * (ay - by) + (ax - bx) * (ax - bx));
}

    vector<vector<ld>>v(0, vector<ld>(4));
void Solve()
{
    char ch;cin >> ch;

    while (ch != '*')
    {
//        int topliftx, toplifty, botrightx, botrighty;
        vector<ld>tmp(4);
        cin >> tmp[0] >> tmp[1] >> tmp[2] >> tmp[3];
        v.push_back(tmp);
        cin >> ch;
    }
    ld x, y;cin >> x >> y;
    int c = 1;
    while(abs(y - 9999.9) > 0.00000001 && abs(x - 9999.9) > 0.00000001)
    {
        int cnt = 1;
        bool inA_Figure = 0;
        for(auto i : v)
        {
            if (x > i[0] && x < i[2] && y > i[3] && y < i[1])
                cout << "Point " << c << " is contained in figure " << cnt <<'\n', inA_Figure = 1;

            cnt++;
        }
        if (!inA_Figure)
            cout << "Point " << c << " is not contained in any figure\n";

        c++;
        cin >> x >> y;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
      Solve();
    return 0;
}

