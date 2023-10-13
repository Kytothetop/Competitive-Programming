#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    unordered_map<string, vector<int>> recipes;
    for (int i = 0; i < n; ++i)
        {
            string name;
            int num_ingredients;
            cin >> name >> num_ingredients;
            vector<int> ingredients(m);
            while (num_ingredients--)
                {
                    int ingredient;
                    cin >> ingredient;
                    ++ingredients[ingredient - 1];
                }
            recipes.emplace(name, move(ingredients));
        }
    while (q--)
        {
            string name;
            cin >> name;
            for (int i = 0; i < recipes[name].size(); i++)
                {
                    cout << recipes[name][i];
                    if (i != recipes[name].size() - 1)
                        {
                            cout << ' ';
                        }
                }
            if (q > 0)
                {
                    cout << '\n';
                }
        }

    return 0;
}
