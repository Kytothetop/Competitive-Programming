#include <iostream>

using namespace std;
void func(int n,int i =0)
{
    int bank_notes[] = {1000,500,100,50,20,10,5,2,1};
    if(n/bank_notes[i] != 0)cout << bank_notes[i] << " Baht = " << n/bank_notes[i];
    if((i < (sizeof(bank_notes)/sizeof(bank_notes[0]))-1) and (n%bank_notes[i]>0))
        {
            if(n/bank_notes[i] != 0)cout << '\n';
            func(n%bank_notes[i],i+1);
        }
    return;
}
int main()
{
    int n;
    cin >> n;
    func(n);
    return 0;
}
