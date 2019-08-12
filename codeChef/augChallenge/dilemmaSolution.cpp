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
int main() {
    // your code goes 
    test {
       string arr;
       get(arr);
       int count = 0;
       loop(0,arr.length()) {
           if(arr.at(i) == '1')
            count++;
       }
    if(count%2 == 1)
      print("WIN");
    else
       print("LOSE");  
    }
    return 0;
}

