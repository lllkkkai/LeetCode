bool isPowerOfThree(int n) {
    if( n <= 0 ){
        return false;
    }
    else{
        while(n==3*(n/3)){
            n = n/3;
        }
        
        if(n == 0 || n==1){
            return true;
        }
        else{
            return false;
        }
    }
}