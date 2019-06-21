// Longest Common Subsequence

#include<iostream>
using namespace std;
int main()
 {
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    int m = s2.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                //last element are equal, increase the length by one.
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                //check for max of (i-1,j) and (i,j-1) including last element of both the strings each at once.
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    cout << dp[n][m] << endl;
	return 0;
}
