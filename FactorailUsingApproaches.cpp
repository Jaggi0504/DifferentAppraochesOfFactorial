#include<bits/stdc++.h>
using namespace std;


// Using Recursion
//int fact(int n) {
//	if(n <= 1) {
//		return 1;
//	}
//	int ans = fact(n-1);
//	return n * ans;
//}


//Using Dynamic Programming
//int fact(int n) {
//	int *ans = new int[n+1];
//	ans[0] = 1;
//	ans[1] = 1;
//	for(int i=2;i<=n;i++) {
//		ans[i] = i * ans[i-1];
//	}
//	return ans[n];
//}


//Using memoization
//int fact_helper(int *ans, int n) {
//	if(n <= 1) {
//		return 1;
//	}
//	if(ans[n] != -1) {
//		return ans[n];
//	}
//	ans[n] = n * fact_helper(ans, n-1);
//	return ans[n];
//}
//
//int fact(int n) {
//	int *ans = new int[n+1];
//	for(int i=0;i<=n;i++) {
//		ans[i] = -1;
//	}
//	return fact_helper(ans, n);
//}

int main() {
	int n;
	cin>>n;
	int ans = fact(n);
	cout<<ans<<endl;
	return 0;
}
