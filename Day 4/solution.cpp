class Solution {
public:
    int nthUglyNumber(int n) {
        int dp[n];
        dp[0]=1;
        int i=0,j=0,k=0,num=1;
        while(num<n)
        {
            int Min;
            Min=min(dp[i]*2,min(dp[j]*3,dp[k]*5));
            if(Min==dp[i]*2)
            {
                i++;
            }
            if(Min==dp[j]*3)
            {
                j++;
            }
            if(Min==dp[k]*5)
            {
                k++;
            }
            //cout<<Min<<" ";
            dp[num]=Min;
            num++;
        }
        return dp[n-1];
    }
};