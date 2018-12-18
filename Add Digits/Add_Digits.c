int addDigits(int num) {
    int s=0;
    while(num >= 10){
        s = s+num%10;
        num = num/10;
        if(num < 10){
            num = s + num;
            s = 0;
        }
    }
    return num;
}