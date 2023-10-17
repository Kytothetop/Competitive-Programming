#include <bits/stdc++.h>

using namespace std;

int main()
{
	srand(time(0));
    vector<string> v{"Top","Liu","Ice","Senmi","Omsin","Khaofang","Kam","James","Phupha","Sanavie","Chai","IQ","Artey(Goseth)","Mark","Pangpond","Guy","Peach","Sun","Fed","AJ","Grammy","Phu","Poom","Sound","Mac","Icqiu","Onrii","Bank","Pheem","P1","Ten","Artey(Gunt)","CD","Boom","P2"};
	for (auto e : v)
	{
//		cout << *e << ' ' ;

		v.push_back((e));
	}
	cout << '\n';
	for (auto &e : v)
	{
		cout << e << ' ' ;
	}
	cout << v.size();
	return 0;
}
