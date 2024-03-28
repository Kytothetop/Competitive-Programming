#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Memoization map to store computed results
unordered_map<string, int> memo;

// Function to find the number of ways to make change
int makeChange(const vector<int>& coins, int money, int index) {
    // Base cases
    if (money == 0)
        return 1; // Only one way to make change, i.e., by not using any coin
    if (money < 0 || index < 0)

        return 0; // No way to make change

    // Memoization: check if the result is already computed
    string key = to_string(money) + "-" + to_string(index);
    if (memo.find(key) != memo.end())
        return memo[key];

    // Recursive calls for including and excluding the coin at index
    int include = makeChange(coins, money - coins[index], index);
    int exclude = makeChange(coins, money, index - 1);

    // Store the result in memoization map
    memo[key] = include + exclude;

    return memo[key];
}

// Wrapper function for makeChange
int makeChangeWrapper(const vector<int>& coins, int money) {
    // Initialize memoization map
    memo.clear();
    // Start from the last coin in the array
    return makeChange(coins, money, coins.size() - 1);
}

int main() {
	int n;
    vector<int> coins; // Available coins
    int money; // Amount to make change
    cin >> money >> n;
    while(n--){int temp; cin >> temp; coins.push_back(temp);}
    cout << makeChangeWrapper(coins, money);

    return 0;
}
