#include "bits/stdc++.h" // ارجع حلها تاني من غير هنتات
using namespace std;
int n, l, r, x;
vector<int> v;

int problemSets(int idx =  0, int sum = 0, int mn = INT32_MAX, int mx = INT32_MIN, int numOfProblemSets = 0) {
    if (idx == v.size())
        return (sum <= r and sum >= l and mx - mn >= x);
    return problemSets(idx + 1, sum + v[idx], min({mn, v[idx]}), max(mx, v[idx]), numOfProblemSets + 1)
    + problemSets(idx + 1, sum, mn, mx, numOfProblemSets);
}
//    return yes + no;

int main() {
    cin >> n >> l >> r >> x;
    v.resize(n);
    for (int &i: v)cin >> i;
    sort(v.begin(), v.end());
    cout << problemSets();
}
