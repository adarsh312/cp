class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int rep = 1;
        string res = A;
        if(A.length() < B.length())
        {
            while(A.length() < B.length()){
                
                A+=res;
                rep++;
                // cout<< A<<" "<<rep<<endl;
            }
           
        }
         A+=res;
        cout<<A<<endl;
        for(int i=0;i<A.length();i++) {
            if(A.at(i) == B.at(0)) {
                int j=0;
                
                for(j=0;j<B.length() && i+j < A.length();j++){
                    if(A.at(i+j) != B.at(j))   
                        break;
                }
                cout<<rep;
                if(j == B.length()) {
                    cout<<i+B.length()<<" "<<A.length() ;
                    return (i+B.length()) <= (A.length() - res.length()) ? rep : rep+1;
                }
            }
        }
        return -1;
    }
};
