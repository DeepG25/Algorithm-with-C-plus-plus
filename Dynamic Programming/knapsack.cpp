// 0/1 Knapsack Problem

#include<iostream>
using namespace std;
int main()
 {
	  int n;
    cin >> n;
    int val[n],wt[n],M;
    cin >> M;
    for(int i=0;i<n;i++)
    {
        cin >> wt[i] >> val[i];
    }
    int dp[n+1][M+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=M;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=M;j++)
        {
            if(j < wt[i])
            {
                dp[i][j] = dp[i-1][j];                                          //DP condition
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , val[i] + dp[i-1][j-wt[i]]);         //DP condition
            }
        }
    }
    cout << dp[n][M] << endl;
	return 0;
}
