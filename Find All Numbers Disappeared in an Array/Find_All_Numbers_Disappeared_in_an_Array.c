/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *a, int *b){
    int temp=*a;  
    *a=*b;  
    *b=temp; 
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result=(int*)malloc(sizeof(int)*numsSize);

    for(int i=0;i<numsSize;i++)
    {
        while(nums[i]!=i+1&&nums[nums[i]-1]!=nums[i])
        {
            swap(&nums[i],&nums[nums[i]-1]);
        }
    }

    *returnSize=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=i+1)
        {
            result[*returnSize]=i+1;
            *returnSize=*returnSize+1;
        }
    }
    
    return result;
}