void sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}

int findUnsortedSubarray(int* nums, int numsSize) {
	int tmp[numsSize];
    for(int i = 0;i<numsSize;i++){
        tmp[i] = nums[i];
    }
	sort(tmp,numsSize);
	int n = numsSize;
	int low = 0;
	int high = n - 1;
	while (low < n && nums[low] == tmp[low]) {
		low++;
	}
	while (high >= low && nums[high] == tmp[high]) {
		high--;
	}
	return high - low + 1;
}
