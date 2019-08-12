#include <iostream>
#define test int t;cin>>t;while(t--)
#define loop(a,b) for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b) for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b) for(ll i=(ll)a;i<(ll)b;++i)
#define get(a) cin>>a
#define getArray(length,a) for(int i=0;i<(int)length;++i) cin>>a[i];
#define printArray(length,a) for(int i=0;i<(int)length;++i) cout<<a[i];

using namespace std;
template <typename T> inline T maxi(T x, T y) { if(x>y) return x; else return y;}

int main() {
	// your code goes her
	test {
	  int size;
	  cin>>size;
	  long long sum=0L;
	  long long a[size],b[size];
	  getArray(size,a);
	  getArray(size,b);
	  loop(0,size) {
	    long long value = (a[i] * 20) - (b[i] * 10);
	    sum = maxi(value,sum);  
	  }
	   cout<< maxi(sum,0ll)<<endl;
	}
	return 0;
}

