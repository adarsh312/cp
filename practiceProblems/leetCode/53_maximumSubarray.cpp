class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,maxSum = nums[0];
        int maxEle = INT_MIN;
        
        for(int i=0;i<nums.size();i++) {
            if(sum + nums[i] < 0) {
               sum = 0;
            } else {
               
                sum += nums[i];  
                 maxSum = max(maxSum,sum);
            }
            maxEle = max(maxEle,nums[i]);
        }
        
        return maxSum > 0 ? maxSum: maxEle;
    }
};
