//
//  
//  
//  Created by Tarlan Askaruly.
//  Copyright (c) 2018 Tarlan Askaruly. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
long long n, dp[300][300], m, a[300][300];
string s;
int main(){
	//freopen("C.in", "r", stdin);
	//freopen("C.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			dp[i][j] = -1000000000;
		}
	}
	dp[1][1] = a[1][1];
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= i; j++){
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + a[i][j];
		}
	}
	for(int i = 2; i <= n; i++){
		dp[n][i] = max(dp[n][i], dp[n][i-1]);
	}
	cout << dp[n][n];
}
close
