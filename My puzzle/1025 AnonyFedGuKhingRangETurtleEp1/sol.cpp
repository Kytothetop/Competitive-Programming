#include <iostream>
#include <algorithm>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
#define n 6
    std::string arr[n];
    for(auto &e:arr)std::cin >> e;
    std::sort(arr,arr+n);
    for(auto &e:arr)std::cout << e;
//    std::cout << "AnonyFedGuKhingRangETurtle";
}
