#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    int k;
    cin>>k;
    int val=0;
    if(k>36)
        cout<<-1<<endl;
    else{
        while(k>0){
            if(k>=2){
                k-=2;
                val+=2;
                cout<<8;
            }
            else{
                k--;val+=1;
                cout<<4;
            }
        }
    }
    cout<<endl;
}
    
