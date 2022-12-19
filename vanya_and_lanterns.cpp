#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 


int main(){
    int n,l;
    cin>>n>>l;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    if(a[0]!=0){
        ans = 2*a[0];
    }
    int last =a[0];
    for(int i=1;i<n;i++){
        int temp =(a[i]-last);
        ans = max(ans,temp);
        last = a[i];
    }
    if(a[n-1]!=l){
        int temp = 2*(l-last);
        ans = max(ans,temp);
    }
    cout<<fixed<<setprecision(10)<<(float)ans/2<<endl;
}
    
