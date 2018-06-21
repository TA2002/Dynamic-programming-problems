//
//  
//  
//  Created by Tarlan Askaruly.
//  Copyright (c) 2018 Tarlan Askaruly. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, dp[100][5];
int main(){
	//freopen("C.in", "r", stdin);
	//freopen("C.out", "w", stdout);
	cin >> n;
	if(n == 0){
		cout << 1;
		return 0;
	}
	dp[1][2] = 1;
	dp[1][1] = 1;
	dp[1][3] = 1;
	for(int i = 2; i <= n; i++){   
    	dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3];
  		dp[i][2] = dp[i-1][2] + dp[i-1][3];
  		dp[i][3] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3];
	}
cout << dp[n][1] + dp[n][2] + dp[n][3];
}
