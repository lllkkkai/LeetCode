int singleNumber(int* nums, int numsSize) {
    
    int temp;
    int j;
    int i;
    //int flag = 0;
    for(i = 0; i < numsSize; i++){
        int flag = 0;
        temp = nums[i];
        for(j = 0; j < numsSize; j++){
            if(j != i){
                if(temp == nums[j]){
                    flag = 1;
                    break;
                }
            }
        }
        
        if(flag == 0){
            break;
        }
        
    }
    
    return temp;
}