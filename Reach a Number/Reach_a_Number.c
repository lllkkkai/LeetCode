int reachNumber(int target) {
        target = abs(target);
        int sum = 0;
        int n   = 0;
        while (sum < target){
            n ++;
            sum += n;
        }
        if (sum == target) return n;
        int res = sum - target;
        if ((res & 1) == 0) {
            return n;
        }
        else {
            return n + ((n & 1) == 0 ? 1 : 2);
        }
}