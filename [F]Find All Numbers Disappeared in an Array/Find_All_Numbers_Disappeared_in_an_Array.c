/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>

int* findDisappearedNumbers(int * nums, int numsSize);

int main(){
        int *a;
        int num[8] = {4,3,2,7,8,2,3,1};
        a=findDisappearedNumbers(num,8);
        for(int i = 0; i < 2; i++) {
                printf("%d\n", a[i]);
        }
        return 0;
}

int* findDisappearedNumbers(int* nums, int numsSize) {

        int temp[numsSize];
        for(int i = 0; i < numsSize; i++) {
                temp[i] = i+1;
        }

        for(int i = 0; i < numsSize; i++) {
                int index = nums[i]-1;
                temp[index] = 0;
        }

        int size=0;
        for(int i = 0; i < numsSize; i++) {
                if(temp[i] != 0) {
                        size++;
                }
        }

        if(size == 0) {
                return NULL;
        }

        int arr[size];
        int r_index = 0;
        for(int i = 0; i < size; i++) {
                if(temp[i] != 0) {
                        arr[r_index] = temp[i];
                        r_index++;
                }
        }

        return arr;
}
