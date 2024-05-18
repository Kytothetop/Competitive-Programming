///// Use Greedy
//#include <bits/stdc++.h>
//long long n, m,temp, state=0;
//int main() {
//    std::cin >> n >> m;
//    long long arr[n];
//    for(long long i =0; i < n;i++)std::cin >> temp,state |= (1LL << (long long)i)*temp;
//    temp=0;
//    for(long long i =0; i < n;i++)std::cin >> arr[i];
//    for(long long i =n-1; i >=0 ; i--)temp += (1 << i) * (int)((state & (1LL << (long long)i))||(!(state & (1LL << (long long)i))&&m>=arr[i]&&((m -= arr[i])>=0)));
//    std::cout << temp;
//}
/// Use Greedy
#include <bits/stdc++.h>
long long n, m,temp;
int main()
{
    std::cin >> n >> m;
    long long arr[n];bool state[n];
    for(long long i =0; i < n; i++)std::cin >> state[i];
    temp=0;
    for(long long i =0; i < n; i++)std::cin >> arr[i];
    for(long long i =n-1; i >=0 ; i--)
        {
            if(state[i] || m>=arr[i])temp += (1LL << i);
            if(m>=arr[i] and !state[i])m -= arr[i];
        }
    std::cout << temp;
}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int N;
//    long long K;
//    cin >> N >> K;
//
//    vector<int> x(N), a(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> x[i];
//    }
//    for (int i = 0; i < N; ++i) {
//        cin >> a[i];
//    }
//
//    long long maxScore = 0;
//    for (int i = 0; i < (1 << N); ++i) {
//        long long sum = 0;
//        long long power = K;
//        for (int j = 0; j < N; ++j) {
//            if (!x[j] && ((i >> j) & 1)) {
//                power -= a[j];
//                if (power >= 0) sum += (1LL << j);
//            } else if (x[j]) {
//                if (power >= 0) sum += (1LL << j);
//            }
//        }
//        if (power >= 0) {
//            maxScore = max(maxScore, sum);
//        }
//    }
//
//    cout << maxScore;
//
//    return 0;
//}
