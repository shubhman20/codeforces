
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    string s;
    cin>>s;
    int n;cin>>n;
    vector<int> a(26);
    int idx=0;
    int maxi=INT_MIN;
    for(int i=0;i<26;i++){
        cin>>a[i];
        if(a[i]>maxi){
            maxi=a[i];
            // idx=i;
        }
    }
    int ans = 0;
    idx=1;
    for(int i=0;i<s.size();i++){
        ans=ans+ (a[s[i]-'a']*(idx));
        // cout<<a[s[i]]<<" "<<idx<<endl;
        idx++;
    }
    for(int i=0;i<n;i++){
        ans= ans + (maxi*(idx));
        // cout<<ans<<" ";
        idx++;
    }
    cout<<ans<<endl;
}
    
