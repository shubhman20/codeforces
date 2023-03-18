#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	ll sum=0;
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	for(int i=0;i<n;i++){
	    if(v[i]<0&&k>0){
	        v[i]= -1*v[i]; 
	        k--;
	    }
	    else{
	        break;
	    }
	}
	sort(v.begin(),v.end());
	if(k>0){
	    v[0] = v[0]* pow(-1,k%2);
	}
	for(int i=0;i<n;i++){
	    sum+=v[i];
	}
	
	
	cout<<sum<<endl;
	
}
