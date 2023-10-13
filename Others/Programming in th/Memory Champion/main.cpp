#include <iostream>
#include <vector>

int calculateF(int n) {
    std::vector<std::vector<std::vector<int>>> memo(n + 1, std::vector<std::vector<int>>(n + 1, std::vector<int>(n + 1, 0)));

    int result = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + i; j++) {
            for (int k = 1; k <= n + i + j; k++) {
                if (k > n + i + j) {
                    k = 1;
                    if (j > n + i) {
                        j = 1;
                        if (i > n) {
                            return result;
                        }
                    }
                }

                if (memo[i][j][k] != 0) {
                    result += memo[i][j][k];
                } else {
                    int tempResult = (i * j * k) % (i + j + k);
                    result += tempResult;
                    memo[i][j][k] = tempResult;
                }
            }
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int fn = calculateF(n);
    std::cout << "f(n) = " << fn << std::endl;

    return 0;
}
