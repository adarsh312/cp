class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        vector<pair<int, int>> map[50000];
      int maxFreq =-1,maxWidth=50000;
        for(int i=0;i<nums.size();i++) {
            if(map[nums[i]].size() == 0)
                map[nums[i]].push_back(make_pair(1,i));
            
                pair<int,int> it = map[nums[i]][0];
                
                int freq = it.first;
                int startIndex = it.second;
                if(freq >= maxFreq){
                    if(freq == maxFreq) {
                         maxWidth = min(i-startIndex,maxWidth);
                    } else {
                        maxWidth = i-startIndex;
                    }
                }
                maxFreq = max(freq,maxFreq);
                map[nums[i]][0] = make_pair(freq+1,startIndex);
            
        }
        
        return maxWidth+1;
    }
                    
};
