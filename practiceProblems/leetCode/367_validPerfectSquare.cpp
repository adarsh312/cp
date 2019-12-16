class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n = num;
        while(n*n >  num) 
            n = (n +(num/n)) / 2;
        if(n*n == num)
            return true;
        else
            return false;
    }
};
