#include <iostream>

using namespace std;

long int sum (long int high,int low=1)
{
    long long int r;
    //base case
    if((high==0)||(high==low)) // low + low+1 + ... + high
        {
            r=low;
        }
    else
        {
            r=high+sum(high-1,low);
        }
    return r;
}

long long int factorial (long long int high, int low=1) // low is there for factorial division more efficient.
{
    long long int r;

    //base case
    if((high==0)||(high==low)) // high*(high-1)*(high-2)*...*low
        {
            r=low;
        }
    else
        {
            r=high*factorial(high-1,low);
        }
    return r;
}

long int choose(long int n=10, long int r=1)// Basically n chooses r
{
    if((n-r>=r)){return (factorial(n,(n-r)+1))/factorial(r);}
    else{return (factorial(n,r+1)/factorial(n-r));}
}

long long int fibonacchi(int limit=100, long long int F=0, long long int N=1) //F:First position , N: Second position ; example: f(5,2,3) -> 2 3 5 8 13
{
    cout << F << ' ';
    if (limit!=1)
    {fibonacchi(limit-1,N,N+F);}
}

int main()
{
    long long int nu=6;
    cin >> nu;
    cout << factorial(nu) << endl << sum(nu,1) << endl;
    fibonacchi(nu);
    cout << endl << choose(nu,2);
}
