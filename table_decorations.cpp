#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
 
int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	ll r,g,b;
	cin>>r>>g>>b;
	ll total = r+g+b;
	ll ans=min(total/3,total-max(r,max(g,b)));
	cout<<ans<<endl;
	
}
