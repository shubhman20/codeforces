#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n;
	cin>>n;
	vector<pair<int,int>> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i].first>>a[i].second;
	}
	
	sort(a.begin(),a.end());
	int lastDay=0;
	for(int i=0;i<n;i++){
	    if(lastDay<=a[i].second){
	        lastDay=a[i].second;
	        
	    }
	    else{
	        lastDay=a[i].first;
	        
	    }
	    
	}
	
	cout<<lastDay<<endl;
	
}
