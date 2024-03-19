#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
	if(pow(b,2)-4*a*c == 0) cout << "One Solution: X = " << (-b)/(2*a);
	if(pow(b,2)-4*a*c > 0) cout << "Two Solutions: X = " << (-b-sqrt(b*b-4*a*c))/(2*a) << " and X = " << (-b+sqrt(b*b-4*a*c))/(2*a);
	if(pow(b,2)-4*a*c < 0) cout << "No Real Solutions";
}
