class Solution {
public:
      
    bool judgeSquareSum(int c) {
        for(int i=0;i <= sqrt(c);i++) {
            long long sqr = i * i;
            double sqrtr = sqrt(c - (sqr));
           if(sqrtr -  floor(sqrtr) == 0) {
               return true;
           }
        }
        return false;
    }
};
