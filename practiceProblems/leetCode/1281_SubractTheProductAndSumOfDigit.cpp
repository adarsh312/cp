class Solution {
public:
    int subtractProductAndSum(int n) {
        long long mull = 1;
        long long sum = 0;
        while(n > 0) {
            int digit = n%10;
            n/=10;
            mull*=digit;
            sum+=digit;
        }
        return int(mull - sum);
    }
};
