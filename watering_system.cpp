#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
        int n;cin>>n;
        long long a,b;
        cin>>a>>b;
        vector<ll> h(n);
        long long tot=0;
        for(int i=0;i<n;i++){
            cin>>h[i];
            tot+=h[i];
        }
        long long val=(a*h[0])/tot;
        if(val>=b)
            cout<<0<<endl;
        else{
            sort(h.begin()+1,h.end());
            int cnt=0;
            for(int i=n-1;i>=1;i--){
                cnt++;
                tot-=h[i];
                val = (a*h[0])/tot;
                if(val>=b){
                    break;
                }
            }
            cout<<cnt<<endl;
        }
}
