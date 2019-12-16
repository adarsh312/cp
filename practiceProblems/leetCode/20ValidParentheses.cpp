class Solution {
public:
    bool isValid(string s) {
         stack <char> s1; 
         stack <char> s2;
        int count = s.length(); 
        int i=0;
        if(count%2 == 1)
            return false;
        while(count--) {
            char a = s.at(i++);
            if(a =='{' || a == '[' || a=='(') {
                s1.push(a);
               
            } else if(!s1.empty() && a == '}' && s1.top() == '{') {
                s1.pop();
            } else if(!s1.empty() && a == ']' && s1.top() == '[') {
                s1.pop();
            } else if(!s1.empty() && a == ')' && s1.top() == '(') {
                s1.pop();
            } else
                return false;
    }
        if(!s1.empty())
            return false;
        else
            return true;
    }
};
