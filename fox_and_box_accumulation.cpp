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
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<int> s;
	s.push_back(1);
	for(int i=1;i<n;i++){
        int flg=0;
        for(int j=0;j<s.size();j++){
            if(s[j]<=a[i]){
                s[j]++;
                flg=1;
                break;
            }
        }
        if(flg==0){
            s.push_back(1);
        }
	}
	
	cout<<s.size()<<endl;
	
}
