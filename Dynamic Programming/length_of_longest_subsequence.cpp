/*
Given an array of integers, find the length of longest subsequence which is first increasing then decreasing.

**Example: **
For the given array [1 11 2 10 4 5 2 1]
Longest subsequence is [1 2 10 4 2 1]
Return value 6
*/

//Solution
int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    int in[n];
    int dec[n];
    for(int i=0;i<n;i++)
    {
        in[i] = 1;
        dec[i] = 1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j]<A[i])
            {
                in[i] = max(in[i],in[j]+1);
            }
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(A[j]<A[i])
            {
                dec[i] = max(dec[i],dec[j]+1);
            }
        }
    }
    int max =0;
    for(int i=0;i<n;i++)
    {
        if(max < in[i]+dec[i]-1)
        {
            max = in[i]+dec[i]-1;
        }
    }
    return max;
}
