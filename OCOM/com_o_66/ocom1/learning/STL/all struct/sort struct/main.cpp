#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct student
{
	string first_name;
	string last_name;
	bool operator<(const student& other) const
    {
    	if(first_name == other.first_name)
			return last_name < other.last_name;
		else
			return first_name < other.first_name;
    }
};

int main()
{
    vector<student> s;
    s.push_back({"Kritanan","Phinyo"});
    s.push_back({"Korakot","Supachuhrkhrhkun"});
    s.push_back({"Ativit","Cheoahrojhtonh"});
    sort(s.begin(),s.end());
    for(auto e : s)
		cout << e.first_name << ' ' << e.last_name << '\n';

    return 0;
}
