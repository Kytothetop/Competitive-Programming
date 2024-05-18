#include <bits/stdc++.h>
using namespace std;

// Structure to represent a point
struct Point
{
    int x, y;
};

// Function to calculate the area of a triangle formed by three points
double area(const Point& A, const Point& B, const Point& C)
{
    return abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2.0);
}

int main()
{
    int n;
    cin >> n;

    // Read points
    vector<Point> points(n);
    for (int i = 0; i < n; ++i)
        {
            cin >> points[i].x >> points[i].y;
        }

    double maxArea = 0.0;



    // Try all combinations of three points using bitmasking
    for (int bitmask = 0; bitmask < (1 << n); ++bitmask)
        {
            // Check if the number of set bits is divisible by 3
            if (not __builtin_popcount(bitmask) % 3)continue;

            for(int i=0;i<n ; i++)
            {

            }

        }
    cout << fixed << setprecision(2);
    cout << maxArea;

    return 0;
}
