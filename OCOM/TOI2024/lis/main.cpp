#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for(auto &e: a) scanf("%d", &e);

	vector<int> dp(n), mn(n+1);
	int len = 1;
	dp[0] = 1;
	mn[1] = a[0];
	for(int i=1;i<n;++i) {
		if(a[i] > mn[len]) {
			dp[i] = ++len;
			mn[len] = a[i];
		} else {
			int idx = lower_bound(mn.begin()+1, mn.begin()+len+1, a[i]) - mn.begin();
			dp[i] = idx;
			mn[idx] = a[i];
		}
	}

	for(auto e: dp) printf("%d ", e);
	cout << '\n';
	return 0;
}
