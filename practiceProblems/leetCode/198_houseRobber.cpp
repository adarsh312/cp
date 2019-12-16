class Solution {
public:
    int rob(vector<int>& nums) {
     if(nums.size() == 0) return 0;
     int ex = 0;
     int incl = nums[0];
     for(int i=1;i<nums.size();i++) {
         int temp = max(incl,ex);
         incl = ex + nums[i];
         ex = temp;
     }   
        return max(incl,ex);
    }
};
