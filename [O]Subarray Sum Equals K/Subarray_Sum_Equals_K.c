int subarraySum(int* nums, int numsSize, int k) {
    int flag = 0;
    int sum = 0;
    int j = 0;
    while(j<numsSize){
        for(int i=j;i<numsSize;i++){
            sum+=nums[i];
            if(sum == k){
                flag++;
            }
        }
        j++;
        sum=0;
    }
    return flag;
}