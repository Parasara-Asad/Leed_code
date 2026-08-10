

bool isHappy(int n) {
    int rem;
    int temp = n;
    int sum;

    while (1) { 
        sum = 0;
        
        while (temp != 0) {
            rem = temp % 10;
            sum += (rem * rem);
            temp = temp / 10;
        }
        
        if (sum == 1) {
            return true;
        }
        
        if (sum == 4) {
            return false;
        }
        
        temp = sum;
    }
    
    return false;
}