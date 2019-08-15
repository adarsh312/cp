

// You are given a N * M matrix. You need to print the sum of all the numbers in the rectangle which has (1,1)  as the top left corner and  as the bottom right corner.

// Input:
// First line contains two integers, N and M, number of rows and number of columns in the matrix.
// Next N lines contains M space separated integers, elements of the matrix.
// Next line contains an integer, Q, number of queries.
// Each query contains two space separated integers, X and Y.

// Output:
// For each query, print the sum of all the numbers in the rectangle which has (1,1) as the top left corner and (X,Y) as the bottom right corner.

#include <iostream>
#define test int t;cin>>t;while(t--)
#define loop(a,b) for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b) for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b) for(ll i=(ll)a;i<(ll)b;++i)
#define get(a) cin>>a
#define print(a) cout<<a<<endl
#define sq(a) a*a
#define getArray(length,a) for(int j=0;j<(int)length;++j) cin>>a[j];
#define printArray(length,a) for(int j=0;j<(int)length;++j) cout<<a[j]<<endl;

using namespace std;
template <typename T> inline T maxi(T x, T y) { if(x>y) return x; else return y;}

int main() {
	// your code goes 
	int N,M;
	cin>>N>>M;
	int arr[N][M];
	loop(0,N) {
	    getArray(M,arr[i]);
	}
	
	loop(0,N) {
	    for(int j=0;j<M;j++) {
	        if(i!=0)
	            arr[i][j] += arr[i-1][j];
	        if(j!=0)
	            arr[i][j]+= arr[i][j-1];
	         if(i!=0&&j!=0)
	            arr[i][j]-= arr[i-1][j-1];
	    }
	}
// 	loop(0,N) {
// 	    printArray(M,arr[i]);
// 	}
	test {
	   int a,b;
	   cin>>a>>b;
	  cout<<arr[a-1][b-1]<<endl;
	}
	return 0;
}
