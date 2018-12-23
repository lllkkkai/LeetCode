int searchInsert(int* nums, int numsSize, int target) {
    int index = 0;
    if(nums[numsSize-1] < target)
        index = numsSize;
    
    for(int i = 0; i<numsSize; i++){
        if(nums[i] >= target){
            index = i;
            break;
        }
    }
    
    return index;
}