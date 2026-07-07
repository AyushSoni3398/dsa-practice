class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        while(n>0){
            int digit = n%10;
            sum += digit;
            if(digit!=0){
                x = x*10 + digit;
            }
            n/=10;
        }
        long long rev = 0;
        while(x>0){
            int digit = x%10;
            rev = rev*10 + digit;
            x/=10;
        }
        return 1LL*rev*sum;
    }
};