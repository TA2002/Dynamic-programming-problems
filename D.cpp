//
//  
//  
//  Created by Tarlan Askaruly.
//  Copyright (c) 2018 Tarlan Askaruly. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
long long n, dp[100][100], m, a[100][100], inf = 1000000000;
string s;
int main(){
	freopen("king2.in", "r", stdin);
	freopen("king2.out", "w", stdout);
	for(int i = 0; i <= 8; i++){
		for(int j = 0; j <= 8; j++){
			dp[i][j] = inf;
		}
	}
	dp[8][1] = 0;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> a[i][j];	
		}
	}
	for(int i = 8; i >= 1; i--){
		for(int j = 1; j <= 8; j++){
			dp[i][j] += a[i][j];
			dp[i - 1][j] = min(dp[i][j], dp[i-1][j]);
			dp[i][j+1] = min(dp[i][j], dp[i][j+1]);
			dp[i-1][j+1] = min(dp[i][j], dp[i-1][j+1]);
		}
	}
	cout << dp[1][8];
}
