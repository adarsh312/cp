class Solution {
public:
    int climbStairs(int n) {
        int i=0,j=1;
        
        while(n--) {
            int temp = i+j;
            i=j;
            j= temp;
        }
        return j;
        
    }
};
