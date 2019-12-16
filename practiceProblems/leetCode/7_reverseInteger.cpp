#include <bits/stdc++.h> 

class Solution {
    public:
    int reverse(int x) {
        long v = (long)x;
        int max = pow(2,31) -1;
        int min = -1 * pow(2,31);
        int count =1;
        long result=0;    
        v = v>0 ? v : -1*v;
        while(v > 0) {
            int digit = v%10;
            v/=10;
            
            result=result*10+digit;
            count*=10;
        }
         if(x < 0)
            result*=-1;
        if(!(result < max && result >min))
            result = 0;
        int resultint = (int)result;
       
        
        return (int)result;
    }
};
