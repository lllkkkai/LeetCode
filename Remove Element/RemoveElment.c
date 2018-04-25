int removeElement(int* nums, int numsSize, int val) {
    int i,n;
    
    for(i=n=0;i<numsSize;i++)
        if(nums[i]!=val) nums[n++]=nums[i];
    
    return n;
}