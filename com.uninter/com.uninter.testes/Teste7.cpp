#include <iostream>
#include <set>
#include <cmath>

int main()
{
   using namespace std;
   set<double> set_1;
   for(int a = 2; a <= 100; a++)
   {
       for(int b = 2; b <= 100; b++)
       {
           set_1.insert(pow(double(a), b));
       }
   }
    cout << set_1.size();

return 0;
}

//Correct output is: 9183. It gives 9220.