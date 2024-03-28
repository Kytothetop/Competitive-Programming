#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> prices;

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        prices.push(price);
    }

    ll sum = 0; // bruh I got 90 bcos i used int

    // Buy k times
    for (int i = 0; i < k; i++) {
        int cheapest = prices.top();
        prices.pop();
        sum += cheapest;
        prices.push(static_cast<int>(floor(cheapest * 1.05)));
    }


    cout << sum;

    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
//	cout << DBL_MAX;
    int n,k,sum = 0,cnt = 0;
    cin >> n >> k;
    vector<double> arr;
    bool flg[n+3] = {0};
    for(int i = 0 ; i < n ; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
    sort(arr.begin(),arr.end());
    int rn = 0;
    while(cnt < k)
        {
//            while(arr[rn] <= arr[rn+1] and rn < n and cnt < k)
            while((int)arr[rn] <= (int)arr[rn+1] and rn < n and cnt < k)
                {

                    cnt++;
//                    if(not flg[rn])
//                        {
                            sum += (floor(arr[rn]));
//                            cout << arr[rn] << ':';
                            arr[rn] = (  (floor(arr[rn]))  *(1.05));
//                            cout << arr[rn] << '\t' << floor(arr[rn]) <<'\n';
//                        }
//                    flg[rn] = 1;
                }
					sort(arr.begin(),arr.end());
//            rn++;
//                cnt++;
        }
//    cout << cnt << '\n';
    cout << sum;
}

*/
