bool isPalindrome(int x) {
    if(x < 0){
        return 0;
    }
    else{
        int n, newed;
        newed=0;
        n=x;
        do
        {
            newed=newed*10+x%10;
            x/=10;
        }while(x>0);
        if(n==newed)
            return 1;
        else
            return 0;
    }
}