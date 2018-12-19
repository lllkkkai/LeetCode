int majorityElement(int* nums, int numsSize) {
    int max;
    int index=0;
    for(int i = 0; i < numsSize; i++){
        max = nums[i];
        for(int j = i+1; j < numsSize; j++){
            if(max == nums[j])
                index++;
        }
        if(index >= numsSize/2)
            return max;
        else
            index=0;
    }
    return 0;
    
}