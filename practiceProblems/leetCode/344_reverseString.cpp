class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp;
        for(int i=0;i<s.size()/2;i++) {
            temp = s[s.size()-i-1];
            s[s.size()-i-1] = s[i];
            s[i] = temp;
        }
    }
};
