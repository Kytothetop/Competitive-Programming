#include <iostream>

/*
Task    :   NumbersIguess
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/

using namespace std;
int credits()
{
    cout << "\n\n**************************************************\n\n~~~~This was brought to you by Kritanan Phinyo~~~~\n\n**************************************************\n\n";
}

int newsub()
{
    cout << "\n\n**************************************************\n\n";
}

int main()
{
   bool  exp1 = true;
   bool  exp2 = false;
   cout << exp1 <<endl;
   cout << exp2 <<endl;
   bool  exp3,exp4;
   exp3 = 5 >= 2;
   cout << "exp3 =" <<exp3 <<endl;
   exp4 = 7 <= 3;
   cout << "exp4 =" <<exp4 <<endl;
   bool  exp5;
   exp5  = 7!=3;  //7 ไม่เท่ากับ 3
   cout << "exp5 =" <<exp5 <<endl;
   bool exp6;
   int x =7,y=7;
   exp6  =  x == y;  //เท่ากับ?
   cout << "exp6 =" << exp6 <<endl;
   bool exp7;
   exp7  = !exp6;   // ! นิเสธ  หรือ not
   cout << "exp7 =" << exp7 <<endl;

   bool  exp8 = 5<2 && 5>3;  // and
   //  5<2  ->F
   // exp8 = F
   cout << "exp8 =" << exp8 <<endl;

   bool  exp9 = 5>2 || 5<3;  // or
   cout << "exp9 =" << exp9 <<endl;

   bool  exp10 = 5 <2 & 5 >3;  //
   //   F  & T
   //   F
   // exp10=F
   cout << "exp10 ="<< exp10 <<endl;
   bool  exp11 = 5 >2 | 5 >3;   //ป้องกันการเกิด short-circuit
   cout << "exp11 ="<< exp11 <<endl;
   int M = 15;
   int N = 10;

   if(M>=N)
   {
       cout << "M is greater or equal to N";
   }

   newsub();


   int number;
   cout << "Enter a number\n: ";
   cin>>number;

   if(number%2 == 0)
   {
       cout << number << " is even."<<endl;
   }
   else if (number%2 == 1)
   {
       cout << number << " is odd."<<endl;
   }
   else
   {
       cout << number << " is invalid."<<endl;
   }

   newsub();

   int score;
   // 80-100 ให้ เกรด A
   // 70-79  ให้ เกรด B
   // 60-69  ให้ เกรด C
   // 50-59  ให้ เกรด D
   // 0-49 ให้ เกรด F
   cout <<"Enter your score\n: ";
   cin>>score;
   cout << "Your score is " << score << ".\n";
   if(score > 100 || score < 0)
   {
       cout << "Your score is invalid";
   }
   else
   {
          if(score >=80 && score <=100)
        {
        cout <<"your grade is " << 'A';
        }
   else if( score >=70)
        {
        cout <<"your grade is " << 'B';
        }
   else if( score >=60)
        {
        cout <<"your grade is " << 'C';
        }
   else if( score >=50)
        {
        cout <<"your grade is " << 'D';
        }
   else
        {
       cout << "your grade is " << 'F';
        }
   }
   cout << ".";

   newsub();

   int d;
   cout << "Enter Data\n: ";
   cin >> d;
   switch(d)
   {
   case 10 ... 19 :
       cout << d << " is from 10 to 19";
       break;
   case 20 ... 29 :
       cout << d << " is from 20 to 29";
       break;
   default:
       cout << d << " is other numbers.";
       break;
   }
   credits();

   cout << "\n**end program**\n";
   return 0;
}
