#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;




int main()
{

  long long a,b,c;
  cin>>a>>b>>c;
  cout<<max(max(a+b,a*b),a-b);
}

