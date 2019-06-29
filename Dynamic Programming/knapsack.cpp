#include <bits/stdc++.h>
using namespace std;

//  0/1 Knapsack Problem
vector<int> Knapsack(int wt[],int profit[],int N,int W)
{
    int dp[N+1][W+1];
    //weight is zero
    for(int i=0;i<=N;i++)
    {
        dp[i][0] = 0;
    }
    //zero items are present
    for(int i=0;i<=W;i++)
    {
        dp[0][i] = 0;
    }

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(j < wt[i-1])         //cannot select the ith item as weight is greater than total.
            {
                dp[i][j] = dp[i-1][j];
                //case : exclude the ith item
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], profit[i-1] + dp[i-1][j-wt[i-1]]);
                //case 1: exclude the ith item
                //case 2: include the ith item
            }
        }
    }
    vector<int> v;
    int j = W,i = N;
    int value = dp[N][W];           //maximum profit
    while(j>0 && i>0 && value>0)
    {
        if(dp[i][j] == dp[i-1][j])
        {
            i--;
        }
        else{
            v.push_back(i-1);   //push the index of element that are selected.
            value = value - profit[i-1];
            i--;
            j = j - wt[i-1];
        }
    }
    return v;
}

int main() {
    int N,W;
    cin >> N >> W;
    int wt[N],profit[N];
    for(int i=0;i<N;i++)
    {
        cin >> wt[i] >> profit[i];
    }
    vector<int> ans = Knapsack(wt,profit,N,W);
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
