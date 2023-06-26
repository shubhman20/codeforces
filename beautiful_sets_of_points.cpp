#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
 
int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n,m;
	cin>>n>>m;
	cout<<min(n,m)+1<<endl;
	for(int i=0;i<=min(n,m);i++){
	    cout<<i<<" "<<min(n,m)-i<<endl;
	}
	
}
