#include <bits/stdc++.h>
using namespace std;
int val(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}

int toDeci(string str, int base)
{
	int len = str.size();
	int power = 1;
	long long int num = 0;
// str[len-1]*1 + str[len-2]*base + str[len-3]*(base^2) + ...
	for (int i = len - 1; i >= 0; i--) {

		if (val(str[i]) >= base) {
			cout << "error";
			return -1;
		}

		num += val(str[i]) * power;

		power = power * base;
	}

	return num;
}
char reVal(long long int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}
string fromDeci(int base, long long int inputNum)
{
	string res = "";

	while (inputNum > 0) {

		res += reVal(inputNum % base);

		inputNum /= base;
	}

	reverse(res.begin(), res.end());

	return res;
}

void con(string s, int a, int b)
{
	long long int num;
	// base A to 10
	num = toDeci(s, a);

	// 10 to base B
	string ans = fromDeci(b, num);
	cout << ans;
}

int main()
{
	string s;
	cin >> s;
	int a, b ;
	cin >> a >> b;
	if(a > 36 || b > 36 || a <2 || b < 2)
		cout << "error";
	else
		con(s, a, b);
	return 0;
}
