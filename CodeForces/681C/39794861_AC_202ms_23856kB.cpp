#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
int mx =  1e9;



bool checkIfPalindrome(int arr[],int n, int idx) {
    if(arr[idx] != arr[n-1-idx])
        return false;
    else if (idx == n-1)
        return true;
    else
        checkIfPalindrome(arr, n, idx+1);
}


int main ()
{
    sad
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<string> ss;
    int n, num;
    cin >> n;
    while(n--)
    {
        string tmp;
        string x;
        cin >> x;
        if(x == "insert")
        {
            cin >> num;
            string tmp = "insert ";
            tmp += to_string(num);
            pq.push(num);
            ss.push_back(tmp);
        }
        else if(x == "removeMin")
        {
            if(pq.empty())
            {
                pq.push(0);
                ss.push_back("insert 0");
            }
            pq.pop();
            ss.push_back("removeMin");
        }
        else
        {
            cin >> num;
            tmp = "getMin ";
            tmp += to_string(num);
            while(!pq.empty() && pq.top() < num)
            {
                ss.push_back("removeMin");
                pq.pop();
            }

            if(pq.empty() || (!pq.empty() && pq.top() != num))
            {
                string kk = "insert ";
                kk += to_string(num);
                pq.push(num);
                ss.push_back(kk);
            }
            ss.push_back(tmp);
        }
    }
    cout << ss.size() << "\n";
    for(string x : ss)
        cout << x << "\n";

}