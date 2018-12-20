int findDuplicate(int* nums, int numsSize) {
    int temp[numsSize];
    for(int i = 0; i < numsSize; i++){
        temp[i] = i+1;
    }
    
    for(int j = 0; j < numsSize; j++) {
        int index = nums[j];
        if(temp[index] != 0){
            temp[index] = 0;
        }
        else
            return index;
    }
    
    return 0;
}