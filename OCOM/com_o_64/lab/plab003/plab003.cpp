#include <iostream>
/*

Task    :   plab003
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int british(int mate){
   switch(mate)
   {
   case 1 :
       cout << "Monday";
       break;
   case 2 :
       cout << "Tuesday";
       break;
   case 3 :
       cout << "Wednesday";
       break;
   case 4 :
       cout << "Thursday";
       break;
   case 5 :
       cout << "Friday";
       break;
   case 6 :
       cout << "Saturday";
       break;
   case 7 :
       cout << "Sunday";
       break;
   default:
       cout << "error";
       break;
   }
}
int main()
{
    int x;
    cin >> x;
    british(x);
}
