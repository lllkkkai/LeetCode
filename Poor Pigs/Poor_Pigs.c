int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    if (buckets < 2)
        return 0;
    
    int count=1;
    int base = minutesToTest/minutesToDie+1;
    int total = base;
    
    while (total < buckets) {
        total*= base;
        count++;
    }
    
    return count;
}