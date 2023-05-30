#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define Time(i, x...) x
#define debug(x...)
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; std::cin >> TC; while(TC--)

vector<int>problems;
int mn = LLONG_MAX, mx = LLONG_MIN;

int n, l, r, x;
int NumberOfProblemSets(int idx =  0, int sum = 0, int mn = INT32_MAX, int mx = INT32_MIN, int numOfProblemSets = 0) {
    if (idx == problems.size())
        return (sum <= r and sum >= l and mx - mn >= x);
    return
            NumberOfProblemSets(idx + 1, sum + problems[idx], min({mn, problems[idx]}), max(mx, problems[idx]), numOfProblemSets + 1)
           + NumberOfProblemSets(idx + 1, sum, mn, mx, numOfProblemSets);
}

void Solve()
{


    cin >> n >> l >> r >> x;
    problems.resize(n);
    for (int &i:problems)cin >> i;
    sort(allc(problems));
    cout << NumberOfProblemSets();
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Solve(), std::cout << "\n";
    return 0;
}




//int NumberOfProblemSets(int n, int l, int r, int x, int idx)
//{
//    if(idx == n)
//        return 0;
//    int leave = NumberOfProblemSets(n, l, r, x, idx + 1);
//    if (valid(l, r, x, problems[idx]))
//    {
//        mn = min(mn, problems[idx]);
//        mx = max(mx, problems[idx]);
//        int take =  NumberOfProblemSets(n, l, r, x, idx + 1) + 1;
//        return max(leave, take);
//    }
//    return leave;
//}
/*
 * int tmpMx = mx, tmpMn = mn, sum = 0;
bool valid(int l, int r, int x, int NewProblem)
{

    return l <= NewProblem && r >= NewProblem && NewProblem - mn <= x && mx - NewProblem <= x;
}



int NumberOfProblemSets(int n, int l, int r, int x, int idx, int mx = LLONG_MIN, int mn = LLONG_MAX, int sum = 0)
{
    if (idx == n)   return 0;
    if (valid(l, r, x, problems[idx]))
        return NumberOfProblemSets(n, l, r, x, idx + 1, max(mx, problems[idx]), min(mn, problems[idx]), ) +
        NumberOfProblemSets(n, l, r, x, idx + 1, mx, mn, sum);
}
 */