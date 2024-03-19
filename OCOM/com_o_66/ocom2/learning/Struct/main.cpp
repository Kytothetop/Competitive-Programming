#include <bits/stdc++.h>

using namespace std;
struct Person
{
	int id;
//	string name;
	int score;
};
bool cmpid(Person x, Person y)
{
	return x.id < y.id;
}
bool cmp(Person x, Person y)
{
	if(x.score != y.score)
	return x.score < y.score;
	return cmpid(x,y);
}
int num(int lim = 100)
{
    return rand()%lim;
}

int main()
{
	srand(time(NULL));
    vector<Person> ppl;
    int x,z;
//    string y;
    Person James;
    James.id = 0;
//    James.name = "James";
    James.score = 95;
    ppl.push_back(James);
    Person Nick;
    Nick.id = 1;
//    Nick.name = "Nick";
    Nick.score = 75;
    ppl.push_back(Nick);
    ppl.push_back({2,50});
    int n = 15;
    for(int i =3; i < n; i++)
    ppl.push_back({i,num(100)});


	for(auto &e : ppl)
	{
		cout
		<< e.id << ' '
//		<< e.name << ' '
		<< e.score << '\n';
	}
	cout << '\n';

    cin
    >> x
//    >> y
    >> z;
    Person Custom;
    Custom.id = x;
//    Custom.name = y;
    Custom.score = z;
    ppl.push_back(Custom);
	sort(ppl.begin(), ppl.end(), cmp);
	for(auto &e : ppl)
	{
		cout
		<< "Id: " << e.id << '\t'
//		<< e.name << ' '
		<< "Score:\t" << e.score << '\n';
	}


	cout << "Find:\n";
	int f1,f2;
	cin >> f1 >> f2;
	Person fnd = {f1,f2};
	auto itr = std::find_if(ppl.begin(), ppl.end(), [fnd](const Person &ss) {
        return (ss.id == fnd.id or ss.score == fnd.score);
    });
    if(itr != ppl.end())
    cout << itr->id << ' ' << itr->score;
    else cout << "Not Found";
	return 0;
}
