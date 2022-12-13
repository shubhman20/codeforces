#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    long long maxsum=0,minsum=0;
    if(l>0) l--;
    if(r>0) r--;
    int t=n;
    while(t--){
        if(l>0){
            minsum+= pow(2,l);
            l--;
        }
        else{
            minsum+=1;
        }
    }
    int k=n-r;
    int v=0;
    while(k--){
        maxsum+=pow(2,r);
    }
    r--;
    while(v<=r){
        maxsum+=pow(2,v);
        v++;
    }
    cout<<minsum<<" "<<maxsum<<endl;
}
