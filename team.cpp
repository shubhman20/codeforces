#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n,m;
	cin>>n>>m;
	if(n-m>1 || m>2*(n+1)){
	    cout<<-1<<endl;
	    return 0;
	}
	
	string ans="";
	int flag=0;
	if(n-m==1) flag=1;
	while(n>0 || m>0){
	    if(flag==1){
	        ans.push_back('0');
	        n--;
	        flag=0;
	    }
	    else{
	        if(m-2>=n){
	            ans.push_back('1');
	            ans.push_back('1');
	            m-=2;
	        }
	        else{
	            ans.push_back('1');
	            m--;
	        }
	        flag=1;
	    }
	}
	
	cout<<ans<<endl;	
}
