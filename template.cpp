#include <bits/stdc++.h>
#define test int t;cin>>t;while(t--)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define SQ(a) a*a
#define deb(x) cout << #x << " " << x << endl;

// graph code
add_edge(vector<int> adj[], int u, int v, bool biDirection) {
	adj[u].push_back(v);
	if(biDirection) adj[v].push_back(u);
}

using namespace std;

int main() {
	test {
	}
	return 0;
}