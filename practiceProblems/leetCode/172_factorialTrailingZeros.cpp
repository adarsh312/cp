class Solution {
public:
    int trailingZeroes(int n) {
         int count = 0;
        if(n < 5)
            return count;
        
        while(n >= 5){
            count += n / 5;
            n /= 5;
        }
        
        
        return count;
    }
};
