class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> set = {'a', 'e', 'i', 'o','u','A','E','I','O','U'};
        int i = 0,j=s.size() - 1;
        char temp;
        while (i < j) {
            if(!set.count(s.at(i)))
                i++;
            if(!set.count(s.at(j)))
                j--;
            if(set.count(s.at(i)) && set.count(s.at(j)))
            {
                 temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;j--;
            }
        }
        return s;
    }
};
