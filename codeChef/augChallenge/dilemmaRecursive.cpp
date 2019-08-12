#include <iostream>
#define test int t;cin>>t;while(t--)
#define loop(a,b) for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b) for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b) for(ll i=(ll)a;i<(ll)b;++i)
#define get(a) cin>>a
#define print(a) cout<<a<<endl
#define sq(a) a*a
#define getArray(length,a) for(int i=0;i<(int)length;++i) cin>>a[i];
#define printArray(length,a) for(int i=0;i<(int)length;++i) cout<<a[i];

using namespace std;
template <typename T> inline T maxi(T x, T y) { if(x>y) return x; else return y;}
char replaceWord(char a) {
    char result =  a=='1'?'0':(a=='0'?'1':'x');
    return result;
}
bool recursive(char arr[], int index, int size) { 
    arr[index] = 'x';
    // print(arr);
    if(index == 0) {
        arr[index+1]= replaceWord(arr[index+1]);
        // print(arr);
    }
    else if(index == size - 1)
        arr[index-1] = replaceWord(arr[index-1]);
    else if(index > 0 && index < size-1){
        arr[index+1]= replaceWord(arr[index+1]);
        arr[index-1] = replaceWord(arr[index-1]);
    }
    // if(!(index == arr.length()))
        
    bool result = false;
    int count =0;
     loop(0,size) {
        if(arr[i] == 'x')
            count++;    
    }
    if(count == size)
        return true;
     loop(0,size) {
        if(arr[i] == '1') {
            // print(i);
           bool ans = recursive(arr,i,size);
           if(ans)
             result = ans;
        }
    }
    return result;
}
int main() {
    // your code goes 
    test {
       string arr;
       get(arr);
       char a[arr.length()];
       loop(0,arr.length()) {
           a[i] = arr.at(i);
       }
       bool result = false;
       loop(0,arr.length()) {
           if(a[i] == '1')
            {
                bool ans = recursive(a,i,arr.length());
                if(ans) { result = ans; break; };
            }  
       }
    if(result)
      print("WIN");
    else
       print("LOSE");  
    }
    return 0;
}

