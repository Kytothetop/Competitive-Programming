#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,cnt = 0;
    cin >> n;
    while(n--)
        {
            bool isprime = true;
            if(n == 2 || n == 3) isprime = true;
            else if(n%2 == 0 || n <= 1) isprime = false;
            else for (long long int i = 3 ; i <= sqrt(n)+1 ; i+=2 )
                    {
                        if(n%i==0)
                            {
                                isprime = false ;
                                break;
                            }
                    }
			if(!isprime)continue;
			cnt++;
			cout << n << '\n';
        }
	cout << "There are "<< cnt << " prime numbers.";
}
