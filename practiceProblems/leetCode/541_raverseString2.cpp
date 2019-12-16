class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=k) {
            int limit = i+k >= s.size() ? (s.size() - i) :k;
            // cout<<limit;
            for(int j=0;j<limit/2;j++) { 
              //  cout<< i+j <<" " <<i+limit-j-1 ;
                char temp = s.at(i+j);
                s[i+j] = s[i+limit-j-1];
                s[i+limit-j-1] = temp;
            }
            i+=k;
        }
        
        return s;
    }
};
