#include <bits/stdc++.h>
#define LSOne(S) (S & (-S))
using namespace std;

typedef long long ll;

// Fenwick tree
// Only the updates are stored. Original array entries are not
// stored and are assumed to be 0. If the original array entries
// are non-zero, we can store them in another array A and modify
// point query to return query(b) + A[b].
ll ft[200005];

// Array size
int N;

// Point query: Returns the value at position b in the array
ll query(int b)	{
	ll sum = 0;
	for (; b; b -= LSOne(b))
		sum += ft[b];
	return sum;
}

// Point update: Adds v to the value at position k in the array
void update(int k, int v) {
	for (; k <= N; k += LSOne(k))
		ft[k] += v;
}

// Range update: Adds v to each element in [i...j] in the array
void range_update(int i, int j, int v)	{
	update(i, v);
	update(j + 1, -v);
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, m;
	cin >> n >> m;
	N = m; // Set N to the total number of positions
	for (int i = 0; i < n; i++) {
		short t;
		cin >> t;
		if (t == 1) { // Add Mountain with width from temp1 to temp2
			int temp1, temp2;
			cin >> temp1 >> temp2;

			range_update(temp1, temp2, 1);
		} else if (t == 2) { // Query from current knowledge of how many mountains occupy position temp
			int temp;
			cin >> temp;
			cout << query(temp) << '\n';
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << query(i) << ' ';
	}
}
