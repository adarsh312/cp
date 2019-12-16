class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() ==0) return 0;
         cout<<s.length() ;
        int j =0 ;
        bool flag = true;
        int start =-1;
        for( j=s.length()-1;j>=0;j--) {
            if(s.at(j) != ' ' && flag)
            {
                start = j;
                flag =false;
                // if(j==0) return 0;
            }
            if(!flag && s.at(j) == ' ') {
               
                return start - j;
                
            }
        }
        return start+1;
    }
};
