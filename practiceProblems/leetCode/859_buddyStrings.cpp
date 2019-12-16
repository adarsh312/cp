class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length() != B.length() || A.length() == 0 || B.length() == 0)
            return false;
        int firstIndex;
        bool flag = false;
        int count = 0;
        int arr[26] ;
        for(int i=0;i<26;i++)
             arr[i] = 0;
        for(int i=0;i<B.length();i++) {
            arr[ A.at(i) - 'a']++;
            if(A.at(i) != B.at(i)) {
                if(flag)
                {
                    if(!(A.at(firstIndex) == B.at(i) && A.at(i) == B.at(firstIndex)))
                        return false;
                }
                firstIndex = i;
                flag = true;
            }
        }
        for(int i=0;i<26;i++)  {
            // cout << arr[i];
            if(arr[i] >= 2 && arr[i]%2 == 0 && flag == false)
                return true;
        }
        return flag;
    }
};
