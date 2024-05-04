#include <bits/stdc++.h>

using namespace std;
int segmtree(int st, int en , int ind, int* tree,int* arr)
{
	if(st == en)
	{
		tree[ind] = arr[st];
		return arr[st];
	}

	int mid = (st+en)/2;
	tree[ind] = segmtree(st,mid,2 * ind+1,tree,arr) + segmtree(mid+1,en,2*ind+2,tree,arr);
	return tree[ind];
}
int main()
{
    int arr[] = {10, 20, 30, 40}, n= 4;
    size_t sz = 2*(pow(2,(log2(n)))) -1;
    int tree[sz];
//    cout << sz;
    segmtree(0,n-1,0,tree,arr);
    for(auto &e : tree)
	{
	cout << e << ' ';
	}
}
