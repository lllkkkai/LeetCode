int reverse(int x) {
   int i = 0, j = 0;
    long int sum = 0;
    long int tem = abs(x);
    while (tem != 0 ){
        tem = tem / 10;
        j++;
    }

    tem = abs(x);

    while (tem != 0) {
        i = tem % 10;
        tem = (tem - i) / 10;
        j--;
        sum = sum + i * pow(10, j);
    }

    if (x < 0) 
         sum = -sum;

    if (sum < -2147483648 || sum >2147483647)
        return 0;
    else
        return sum;
}