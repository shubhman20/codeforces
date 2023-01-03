#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    int n;
    cin>>n;
    int even=0,odd=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even=1;
        }
        else{
            odd=1;
        }
    }
    if(even&&odd){
        sort(a.begin(),a.end());
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
    
