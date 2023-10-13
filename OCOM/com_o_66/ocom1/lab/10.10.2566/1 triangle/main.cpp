#include <iostream>

using namespace std;

int main()
{
    int a,b,c; cin >>a>>b>>c;
    int cnt =0;
	if(a == b) cnt++;
	if(c == b) cnt++;
	if(a == c) cnt++;
	switch (cnt)
	{
	case 0:
		cout << "irregular";
		break;
	case 1:
		cout << "symmetric";
		break;
	case 3:
		cout << "regular";
		break;

	default:
		break;
	}

}
