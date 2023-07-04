#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
 
int mod = 1e9 + 7;
 
int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<string> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	long long cnt=1;
// 	int j=0;
	for(int i=0;i<m;i++){
	    unordered_set<char> mp;
	    for(int j=0;j<n;j++){
	        mp.insert(a[j][i]);
	        
	    }
	    cnt = (cnt*(mp.size()%mod))%mod;
	}
	
	cout<<cnt%mod<<endl;
}
