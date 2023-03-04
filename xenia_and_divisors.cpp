#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	int t;cin>>t;
	vector<int>hash(8,0);
	for(int i=0;i<t;i++){
	    int v;cin>>v;
	    hash[v]++;
	}
	if(hash[5]==0&&hash[7]==0&&hash[2]>=hash[4]&&hash[1]==hash[4]+hash[6]&&hash[2]+hash[3]==hash[4]+hash[6]){
	    for(int i=0;i<hash[4];i++){
	        cout<<"1 2 4\n";
	    }
	    hash[2]-=hash[4];
	    for(int i=0;i<hash[2];i++){
	        cout<<"1 2 6\n";
	    }
	    for(int i=0;i<hash[3];i++){
	        cout<<"1 3 6\n";
	    }
	}
	else{
	    cout<<"-1"<<endl;
	}
}
