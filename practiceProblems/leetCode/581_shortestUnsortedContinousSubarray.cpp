class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
       int startIndex = 0, endIndex = -1,temp =nums[0];
        for(int i=0;i<nums.size();i++) {
           if(temp > nums[i]) 
               endIndex = i;
            else
                temp = nums[i];
       }
         temp = nums[nums.size() - 1];
        if(endIndex == -1)   return 0;
         for(int i=nums.size()-1;i>=0;i--) {
           if(temp < nums[i]) 
               startIndex = i;
            else
                temp = nums[i];
       }
        // cout<<endIndex;
        // cout<<startIndex;
     return (endIndex - startIndex + 1);   
    }
};
