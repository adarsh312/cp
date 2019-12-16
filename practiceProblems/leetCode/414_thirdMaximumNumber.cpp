class Solution {
public:
    int thirdMax(vector<int>& nums) {
          if(nums.size() == 2)
            return max(nums[0],nums[1]);
        else if(nums.size() == 1)
            return nums[0];
        else if(nums.size() == 0)
            return 0;
        long long first = LONG_MIN ,second = LONG_MIN  ,third = LONG_MIN ;
        for(int i=0;i<nums.size();i++) {
            if(first < nums[i]) {    
                third = second;
                second = first;
                first = nums[i];
            } else if (second < nums[i] && first != nums[i]) {  
                third = second;
                second = nums[i];
            } else if (third < nums[i] && first!= nums[i] &&second!=nums[i]) {  
               third = nums[i];
            }
        }
        return (int) (third == LONG_MIN ? first : third);
    }
};
