int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int min_index;
    int max_index;
    int i = 0;
    
    for(int k = 0; k < pricesSize; k++){

        min_index = prices[k];
        max_index = prices[k];
        i = k+1;
        while(i < pricesSize){
            if(max_index < prices[i]){
                max_index = prices[i];
            }
            i++;
        }
    
        if(profit < (max_index-min_index)){
            profit = max_index-min_index;
        }

    }
    return profit;
}