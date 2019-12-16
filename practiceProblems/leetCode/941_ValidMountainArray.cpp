class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)
            return false;
        if((A[0] - A[1]) > 0)
            return false;
        int diff = 0;
        bool ele = true;
        for(int i=0;i<A.size()-1;i++) {
            diff = A[i+1] - A[i];
            if(diff > 0 && !ele)
                return false;
            if(diff < 0)
                ele = false;
            if(diff == 0)
                return false;
            
        }
        return  ele ? false : true;
    }
};
