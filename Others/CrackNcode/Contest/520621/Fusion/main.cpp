#include <bits/stdc++.h>

using namespace std;
pair<int, int> nearestSumPartition(vector<int>& nums)
{
    int n = nums.size();
    int totalSum = 0;
    for (int num : nums)
        totalSum += num;

    vector<bool> dp(totalSum / 2 + 1, false);

    dp[0] = true;

    int nearestSum = 0;
    for (int i = 0; i < n; ++i)
        {
            for (int j = totalSum / 2; j >= nums[i]; --j)
                {
                    if (dp[j - nums[i]])
                        {
                            dp[j] = true;
                            nearestSum = max(nearestSum, j);
                        }
                }
        }

    return make_pair(nearestSum, totalSum - nearestSum);
}
//long long optimizedPairsSum(const vector<int>& nums)
//{
//    long long totalSum = 0;
//    int n = nums.size();
//
//    long long sumOfSquares = 0;
//    long long sum = 0;
//
//    for (int i = 0; i < n; ++i)
//        {
//            sumOfSquares += (long long)nums[i] * nums[i]; // Sum of squares
//            sum += nums[i]; // Sum of numbers
//        }
//
//    // Apply the formula: (a + b)^2 = a^2 + b^2 + 2ab
//    totalSum = (sum * sum - sumOfSquares) / 2;
//
//    return totalSum;
//}
int main()
{
    int n,q;
    cin >> n >> q;
//    priority_queue<int> costed;
//    priority_queue<int, vector<int>, greater<int>> num;
//    queue<int> num;
    vector<int> nums;
//    vector<int> set1, set2;
//    int minDiff = INT_MAX;

//    priority_queue<int> num;

    long long sumOfSquares = 0;
    long long sum = 0;
    for(int i =0; i < n ; i++)
        {
            int temp;
            cin >> temp;
//            num.push(temp);
            nums.push_back(temp);

            sumOfSquares += (long long)nums[i] * nums[i]; // Sum of squares
            sum += nums[i]; // Sum of numbers
        }


    // Apply the formula: (a + b)^2 = a^2 + b^2 + 2ab
    long long result = (sum * sum - sumOfSquares) / 2;
//	long long result = optimizedPairsSum(nums);
    if(q==1)
        {
            auto aa = nearestSumPartition(nums);
            result-=(aa.first*aa.second);
        }
    cout << result;
}
//    while (num.size() > 1)
//        {
//            int n1 = num.front();
//            num.pop();
//            int n2 = num.front();
//            num.pop();
//			int nsum = n1+n2;
//			int np = n1*n2;
//			num.push(nsum);
//			costed.push(np);
////			cout << n1 << ' ' << n2 << ": " << nsum << ' ' << np << '\n';
//        }
//
////    while (num.size() > 1)
////        {
////            int n1 = num.top();
////            num.pop();
////            int n2 = num.top();
////            num.pop();
////			int nsum = n1+n2;
////			int np = n1*n2;
////			num.push(nsum);
////			costed.push(np);
////			cout << n1 << ' ' << n2 << ": " << nsum << ' ' << np << '\n';
////        }
////	while(q--)
////	{
////		costed.pop();
////	}
//	int sum =0;
//	while(not costed.empty())
//	{
//		sum += costed.top();
//		costed.pop();
//	}
////	int sum1=0,sum2=0;
//	if(q==1)sum -= (aa.first * aa.second);
//
//	cout << sum;
//}
