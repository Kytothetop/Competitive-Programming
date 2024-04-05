#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> arr;

    for (int i = 0; i < n; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        arr[temp1] = temp2;
    }

    for (auto &c : arr) {
        while (c.second > 1) {
            int to_beyond = floor(log2(c.second)); // Determine how many times we can evolve
            int evolve = (1 << to_beyond); // Number of slimes used to evolve
            arr[c.first * 2] += to_beyond; // Evolve the slime
            c.second -= evolve; // Subtract the evolved slimes from the current group
        }
    }

    int sum = 0;
    for (auto &c : arr) {
        sum += c.second; // Add up the remaining slimes
    }

    cout << sum;

    return 0;
}
