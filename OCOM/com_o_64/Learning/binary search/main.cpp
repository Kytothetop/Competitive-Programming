#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> v={10,20,30,25,15,10,20,25,35,25,35};
    sort(v.begin(),v.end());  //have to be sorted before use the binary_search()
    for(auto & e:v){
        cout << setw(3) << e ;
    }
    cout <<endl;
    vector<int>::iterator it;
    int key=35;
    int occur;
    it= lower_bound(v.begin(),v.end(),key);
    int freqency=0;
    if(*it==key){
        do{
            occur=*it;
            cout << *it<< " found in vector " ;
            cout << " \tits index " << it-v.begin() <<endl;
            freqency++;
            ++it;
        }
        while(*it==occur && it != v.end());
        cout << "v contains "<< freqency<< " occurrence of "<< key << ".\n";
    }
    else{
        cout << setw(3)<< key << " not found"<<endl;
    }
    return 0;
}
