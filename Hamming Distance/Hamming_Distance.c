int hammingDistance(int x, int y) {
    int t = x^y;
    int result=0;
    
    for(int i = 0; i < 32; i++){
        result+=(t>>i)&1;
    }
    
    return result;
}