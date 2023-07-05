#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int mod = 1e9 + 7;

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);
	set<int>ans;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	
	if(n==1){
	    cout<<-1<<endl;
	    return 0;
	}
	else if(n==2){
	    int diff = a[1]-a[0];
	    ans.insert(a[0]-diff);
	    ans.insert(a[1]+diff);
	    if(diff%2==0){
	        ans.insert(a[0]+diff/2);
	    }
	}
	else{
	    vector<int> d(n-1);
	    for(int i=0;i<n-1;i++){
	        d[i] = a[i+1]-a[i];
	    }
	    
	    sort(d.begin(),d.end());
	    //if(all elements are already in AP)
	    if(d[0]==d[n-2]){
	        ans.insert(a[0]-d[0]);
	        ans.insert(a[n-1]+d[n-2]);
	    }
	    else if(d[0]==d[n-3]){
	        for(int i=0;i<n-1;i++){
	            if(a[i+1]-a[i]== 2*d[0] && a[i+1]-a[i]!=d[0]){
	                ans.insert(a[i]+d[0]);
	            }
	        }
	    }
	}
	
	cout<<ans.size()<<endl;
	for(auto &it : ans){
	    cout<<it<<" ";
	}
	cout<<endl;
	
	
}
