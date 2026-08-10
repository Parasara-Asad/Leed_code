bool isPalindrome(int x) {
    int temp = x;
    long long rem = 0, rev = 0;
    if(x < 0){
        return false;
    }
    while (x != 0) {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x/10;
    }
    if(rev == temp){
        return true;
    }
    else{
        return false;
    }
}