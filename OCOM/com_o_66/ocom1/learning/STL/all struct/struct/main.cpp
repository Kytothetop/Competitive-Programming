#include <bits/stdc++.h>

using namespace std;
map<int,string> category;
struct product
{
	int id;
	string name;
	int category_id;
	int cost;
};

struct person
{
    int id_card;
    std::string name;
    int money;
};

struct job
{
    int salary;
};

struct in_school : public person
{
    int school_id;
};

struct student : public in_school
{
    int student_id;
};

struct teacher : public in_school, public job
{
    int teacher_id;

    void work()
    {
        money += salary;
    }
};



int main()
{
	int n = 6;
    product p[n];
    vector<student> s = {};
    vector<teacher> t = {};
	for(int i =1; i <= n ; i++)p[i-1].id = i;
	p[0].name = "TV Set";
	p[1].name = "VCD";
	p[2].name = "Clothe Box";
	p[3].name = "Perfume";
	p[4].name = "Banana";
	p[5].name = "Pear";

	category.emplace(1,"Entertainment");
	category.emplace(2,"Household");
	category.emplace(3,"Beauty");
	category.emplace(4,"Fruit");
	p[0].category_id = 1;
	p[1].category_id = 1;
	p[2].category_id = 2;
	p[3].category_id = 3;
	p[4].category_id = 4;
	p[5].category_id = 4;

	p[0].cost = 10;
	p[1].cost = 20;
	p[2].cost = 30;
	p[3].cost = 40;
	p[4].cost = 50;
	p[5].cost = 60;

	cout << "id\t|\tname\t|\tcategory\t|\tcost\n";
	for (auto e : p)
	{
		cout << e.id << "\t|\t" << e.name << "\t|\t" << category[e.category_id] << "\t|\t" << e.cost << '\n';
	}
}
