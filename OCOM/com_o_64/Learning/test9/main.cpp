#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int>::const_iterator it;
	for(it = v.begin(); it!= v.end();it++){
		cout << *it <<endl;
	}
    if(it == v.end()){
		cout <<" At the end point \n";
    }
    cout << "  **** \n";

    for(it=v.begin()+1;it != v.end() ;it++){
		cout << *it <<endl;
    }
    cout << "  **** Access a member of v using index ****\n";
    for(int i= 0;i<v.size();i++){
		cout << v[i] <<endl;
    }

    auto x= 2;
    //type of x is int;
    auto d = 2.5;
    // type of d is double
    cout <<" **** using for-each ****\n";
    for(auto e:v){
		//e is an member of v , type e is inferenced by using type of element in v (int)
		cout << e <<endl;
    }

	int & rx= x;

    for(auto &  e: v){
		e=e*2;
    }
    cout << " **** After new e ****\n";
    for(auto & e : v){
		cout << e <<endl;
    }



    return 0;
}
