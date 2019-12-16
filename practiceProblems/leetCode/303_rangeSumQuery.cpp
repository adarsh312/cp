class NumArray {
    public:
    vector<int> *numsPtr;
public:
    NumArray(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            nums[i] = sum;
        }
        numsPtr = &nums;
        // for(int i=0;i<nums.size();i++) {
        //     cout << (*numsPtr)[i];
        // }
    }
    
    int sumRange(int i, int j) {
        if(i==0) return (*numsPtr)[j];
        return (*numsPtr)[j] - (*numsPtr)[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
