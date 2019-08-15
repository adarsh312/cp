
#include <iostream>
#define test int t;cin>>t;while(t--)
#define loop(a,b) for(int i=(int)a;i<(int)b;++i)
#define rloop(a,b) for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b) for(ll i=(ll)a;i<(ll)b;++i)
#define get(a) cin>>a
#define print(a) cout<<a<<endl
#define sq(a) a*a
#define getArray(length,a) for(int i=0;i<(int)length;++i) cin>>a[i];
#define printArray(length,a) for(int i=0;i<(int)length;++i) cout<<a[i];
const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
using namespace std;
template <typename T> inline T maxi(T x, T y) { if(x>y) return x; else return y;}

int main() {
	// your code goes 
    long long arr[100000];
    long long value = 1;
    arr[0] = 1;
    arr[1] = 1;
	test {
	    int a;
	    get(a);
	    long long sum=1;
	    if(a > value) {
    	    rloop(value,a) {
    	        arr[i] = (arr[i-1] * i) % MOD;   
    	    }
    	   value = a;
	    }
	    print(arr[a]);
	}
	return 0;
}
