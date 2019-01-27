int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;  
    
}

int maxSubArray(int* nums, int numsSize) {
    int len = numsSize;
    if (len == 0) {
        return 0;
    }
        
    int dp[len];
    dp[0] = nums[0];
    for (int i = 1; i < len; i++) {
        dp[i] = max(nums[i], dp[i-1] + nums[i]);
    }

    int res = dp[0];
    for (int i = 1; i < len; i++) {
        res = max(res,dp[i]);
    }
    return res;
}