int max(int a, int b){
    if(a >= b){
        return a;
    }
    return b;
}

int rob(int* nums, int numsSize) {
	if (numsSize <= 0) {
		return 0;
	}
    if(numsSize == 1){
        return nums[0];
    }
	int cur_max[2] = { nums[0],max(nums[0],nums[1]) };
	for (int i = 2; i < numsSize; i++) {
		int tmp = cur_max[1];
		cur_max[1] = max(cur_max[0] + nums[i], cur_max[1]);
		cur_max[0] = tmp;	
	}
	return cur_max[1];
}