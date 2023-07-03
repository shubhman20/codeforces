#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	int n = s.size();
	vector<int> remainder_a_till(n);
	remainder_a_till[0] = (s[0]-'0')%a;
    for(int i=1;i<n;i++){
        remainder_a_till[i] = (remainder_a_till[i-1]*10 + (s[i]-'0'))%a;
    }    
    
    int ten_power=10;
    vector<int> remainder_b_before(n);
    remainder_b_before[n-1] = (s[n-1]-'0')%b;
    for(int i=n-2;i>=0;i--){
        remainder_b_before[i] = (remainder_b_before[i+1] + (s[i]-'0')*ten_power)%b;
        ten_power = (ten_power*10)%b;
    }
    
    int end_of_a=-1;
    for(int i=0;i<n-1;i++){
        if(remainder_a_till[i]==0 && remainder_b_before[i+1]==0 && s[i+1]!='0'){
            end_of_a=i;
        }
    }
    
    if(end_of_a==-1 || end_of_a==n-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<s[i];
            if(i==end_of_a){
                cout<<"\n";
            }
        }
    }
    
}
