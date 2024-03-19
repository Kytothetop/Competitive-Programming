#include <iostream>
#include <cstring>
using namespace std;
//#define ospc(n) {for(int j =0; j < n; j++)cout << ' ';}
//#define pnt(n, spc) {for(int j =0; j < n; j++)	cout << '#';if(spc)		cout << ' ';}
void pnt(int n, int tp, int g =0) // print n times
{
	string s(n, ' ');
//	memset(s, ' ', sizeof(s) -1);
	switch (tp)
	{
	case 1:	//	####
		std::fill(s.begin(), s.end(), '#');
		break;
	case 2:	//	#
			//	 #
		s[0] = '#';
		break;
	case 3:	//	#  #
		s[0] = '#';
		s[g] = '#';
		break;
	default:
		break;
	}
//	for(int i =0; i < n ; i++)cout << s[i];
	cout << s;
}
int main()
{
int n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;


    //Top
    {
        //F
        pnt(n,1);
        cout << ' ';
        //O
        pnt(n,1);
        cout << ' ';
        //R
        pnt(n,1);
        cout << ' ';
        //D
        pnt(n-1,1);
        cout << '\n';
    }

    //mid-up
    for(int i =0; i < n-2; i++)
        {
            //F
            pnt(n,2);cout << ' ';
            //O
            pnt(n,3,n-1);cout << ' ';
            //R
            pnt(n,3,n-1);cout << ' ';
            //D
            pnt(n,3,n-1);
            cout << '\n';
        }
    //mid
    {
        //F
        pnt(n,1);cout << ' ';
        //O
        pnt(n,3,n-1);cout << ' ';
        //R
        pnt(n,1);cout << ' ';
        //D
        pnt(n,3,n-1);cout << ' ';
        cout << '\n';
    }
    //mid-down
    for(int i =0; i < n-1; i++)
        {
            //F
            pnt(n,2); cout << ' ';
            //O
            if(i<n-2)
                {
                    pnt(n,3,n-1);
                }
            else pnt(n,1);
                    cout << ' ';
            //R
            pnt(n,3,i+1);cout << ' ';
            //D
            if(i<n-2)
                {
                    pnt(n,3,n-1);
                    cout << '\n';
                }
            else
                {
                    pnt(n-1,1);
                }
        }
}
