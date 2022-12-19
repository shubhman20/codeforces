#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int last=a[0];
    ll step = a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]<last){
            step += n-last + a[i];
            last=a[i];
        }
        else if(last==a[i])
            continue;
        else{
            step+=(a[i]-last);
            last=a[i];
        }
    }
    cout<<step<<endl;
}
    
