#include <iostream>
#include <algorithm>
#include <time.h>
#include <math.h>
#include <vector>

using namespace std;
#define lli long long int
int num(int lim = 100)
{
    return rand()%lim;
}

struct mob
{
    int id;
    string name;
    int hp;
    int atk;
    bool operator<(const mob &other) const
    {
		return hp < other.hp;
    }
};

template <class T> pair<int,T> bisearch(vector<T> arr, lli L, lli R, T key)
{
    if(L > R)
        {
            return {-1,{-1,"VOID",-1,-1}};
        }
    lli mid = L + ((R-L)/2);
//    cout << '\n' << arr[mid];
            cout
				<< arr[mid].id
				<< "\tName: " << arr[mid].name
				<< "\tAtk: " << arr[mid].atk
				<< "\tHp: " << arr[mid].hp
				<< "\tat " << mid << '\n';
    if(key < arr[mid])
        {
            return bisearch(arr,L,mid-1,key);
        }

    else if(arr[mid] < key)
        {
            return bisearch(arr,mid+1,R,key);
        }
    else
        {
            return {mid,arr[mid]};
        }
}
std::string commonMonsterNames[64] = {
        "Goblin", "Orc", "Kobold", "Skeleton", "Zombie", "Ogre", "Giant", "Dragon",
        "Beholder", "Gargoyle", "Harpy", "Medusa", "Sphinx", "Cyclops", "Minotaur", "Lich",
        "Wraith", "Banshee", "Demon", "Devil", "Gnoll", "Bugbear", "Hobgoblin", "Imp",
        "Manticore", "Chimera", "Hydra", "Griffin", "Centaur", "Satyr", "Lamia", "Succubus",
        "Incubus", "Troll", "Golem", "Djinni", "Elemental", "Yeti", "Vampire", "Werewolf",
        "Basilisk", "Cockatrice", "Mimic", "Gelatinous Cube", "Rust Monster", "Otyugh", "Displacer Beast", "Bulette",
        "Rakshasa", "Aboleth", "Gibbering Mouther", "Lycanthrope", "Sahuagin", "Mind Flayer", "Githyanki", "Githzerai",
        "Yuan-ti", "Spectator", "Thri-kreen", "Owlbear", "Hook Horror", "Umber Hulk", "Xorn"
    };
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << "Mobs present (sorted by hp):\n";
    srand(time(NULL));
    lli n = 16;
    vector<mob> aMobList;
    for(lli i =0; i<n; i++)
        {
//            int temp1,temp3,temp4;
//            string temp2;
			aMobList.push_back({i,commonMonsterNames[num(64)],num(50)+1,num(25)+1});
        }
//    cout << '\n';
    sort(aMobList.begin(),aMobList.end());

    for(lli i =0; i< n ; i++)
        {
            cout << aMobList[i].name << ": " << aMobList[i].hp << ((i<n-1) ? (", ") : (""));
        }
    cout << "\n\nSelect mob with:\n";
    mob key;
//	cin >> key;
    key = aMobList[num(n)];
    cout << key.hp << " hp\n\n";

    pair<int,mob> ff = bisearch(aMobList,0,n-1,key);
    if(ff.first != -1)
        {
            cout
				<< "\nId: " << ff.second.id
				<< "\nName: " << ff.second.name
				<< "\nAtk: " << ff.second.atk
				<< "\nHp: " << ff.second.hp
				<< "\nat " << ff.first+1;
        }
    else
        cout << "Not Found.";
}
