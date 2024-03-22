#include <bits/stdc++.h>

using namespace std;

void sol()
{
    string s;
    cin >> s;
//	map<string,???> own;
	int convert[] = {10,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38};
//	for(char i ='A'; i <= 'Z' ; i++)cout << i << ": " << convert[i-'A'] << '\n';
	vector<long long> chk(11);
	for(int i =0; i < 4 ;i++)
		chk[i] = convert[s[i] - 'A'];
	for(int i =4; i < 10;i++)
	{
		chk[i] = (s[i] - '0');
	}
	long long sum =0;
	for(int i =0; i < 10;i++)
	{
		sum += (chk[i] << (i));
//		cout << chk[i] << ' ';
	}
//	cout << '\n';
	long long ans = sum%11;
//	if(ans == 10)ans = 0;
//	int ans = sum;
	if(ans == (s[10] - '0'))
//		cout << s << '\n' << ans << '\n';
		cout << s << '\n';


}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--)sol();
}
