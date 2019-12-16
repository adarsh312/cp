class Solution {
public:
    int countSegments(string s) {
        if(s.length() ==0)
            return 0;
        int count = s.at(0) == ' ' ? 0 : 1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s.at(i) == ' ' && s.at(i+1) != ' ')
                count++;
        }
        return count;
    } 
};
