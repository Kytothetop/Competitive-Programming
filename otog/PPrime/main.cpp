#include <iostream>
using namespace std;

/*
string is_prime(int n) {
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number
    if (n == 1) {
        return "No";
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return "No";
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return "Yes";
}
*/

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    int x;
    cin >> x;
    if (isPrime(x))
        {
            cout << "Yes";
        }
    else
        {
            cout << "No";
        }
}
