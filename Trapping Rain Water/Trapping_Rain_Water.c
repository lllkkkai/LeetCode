int trap(int* A, int n) {
        if(n <= 2) return 0;
        int max = -1, maxInd = 0;
        int i = 0;
        for(; i < n; ++i){
            if(A[i] > max){
                max = A[i];
                maxInd = i;
            }
        }
        int area = 0, root = A[0];
        for(i = 0; i < maxInd; ++i){
            if(root < A[i]) root = A[i];
            else area += (root - A[i]);
        }
        for(i = n-1, root = A[n-1]; i > maxInd; --i){
            if(root < A[i]) root = A[i];
            else area += (root - A[i]);
        }
        return area;
}