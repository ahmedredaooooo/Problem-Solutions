#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        if (a == 2)
            cout << "no";
        else
            cout << "yes";
    }
    else
        cout << "no";
}