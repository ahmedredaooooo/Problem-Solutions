//
// Created by ahmed on 30/06/2023.
//
/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

unordered_map<int, bool>mp;

void generatePossibleSequence(int n, vector<int> & possibleAnswer)
{
    possibleAnswer.push_back(n);
    if (!(n % 3) && mp[n / 3])
        generatePossibleSequence(n / 3, possibleAnswer);
    if (mp[2*n])
    generatePossibleSequence(n * 2, possibleAnswer);
}

void Solve()
{
    int n;cin >> n;
    vector<int>v(n);
    vector<int>possibleAnswer;

    for(auto &i : v)cin >> i, mp[i] = true;

    for(auto i : v)
    {
        generatePossibleSequence(i, possibleAnswer);
        if (possibleAnswer.size() == n)
            break;
        possibleAnswer = vector<int>();
    }
    for(auto i : possibleAnswer)cout << i << " ";
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}

