class Solution {
    public int[] sortArrayByParity(int[] A) {
        int i = 0;
        int j = A.length-1;
        while(i < j){
            while(i < j && A[i] % 2 == 0) i++;
            if(A[i] % 2 == 1){
            int temp = A[j];
            A[j--] = A[i];
            A[i] = temp;   
            }
        }
        return A;
    }
}