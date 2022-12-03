#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        int l=0,r=0,u=0,d=0;
        int a=x[i],b=y[i];
        for(int j=0;j<n;j++){
            if(x[j]==a){
                if(b<y[j]) u++;
                if(b>y[j]) d++;
            }
            if(y[j]==b){
                if(x[j]>a) r++;
                if(x[j]<a) l++;
            }
        }
        if(r>0&&l>0&&u>0&&d>0){
            count++;
        }
    }
    cout<<count<<endl;
}
