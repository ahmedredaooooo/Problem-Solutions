#include <iostream>

using namespace std;

int main()
{
   int n , di[105] , a , b ;
   cin >> n;
   for (int i=0 ; i<n-1 ; i++)
   {
       cin >> di[i];
   }
   cin >> a >> b ;
   int Rank=0;
   for (int i=(a-1) ; i<(b-1); i++)
   {
       Rank+=di[i];
   }
   cout << Rank;




    return 0;
}