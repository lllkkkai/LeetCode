/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int* appcet;
    appcet = (int)malloc(sizeof(int));
    
    int temp;
    
    for(int i = 0; i < numsSize-1; i++){
        temp = target - nums[i];
        for(int j = i+1; j <numsSize; j++){
            if(temp == nums[j]){
                appcet[0] = i;
                appcet[1] = j;
                return appcet;
            }    
        }
    }
    
    return appcet;
    
    /*
    for(int i = 0; i < numsSize-1; i++){
        for(int j = i+1; j < numsSize ; j++){
            if(nums[i] + nums[j] == target){
                appcet[0] = i;
                appcet[1] = j;
                return appcet;
            }
        }
    }
    
    return appcet;
    */
}