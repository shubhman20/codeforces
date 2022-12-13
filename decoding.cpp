#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
    int s;
    cin>>s;
	string a,ans;
    cin>>a;
    if(a.size()%2==0){
        ans.push_back(a[0]);
        int k=0;
        for(int i=1;i<a.size();i++){
            if(k%2==0){
                ans.push_back(a[i]);
            }
            else{
                ans = a[i]+ans;
            }
            k++;
        }
    }
    else{
        ans.push_back(a[0]);
        int k=0;
        for(int i=1;i<a.size();i++){
            if(k%2==0){
                ans = a[i]+ans;
            }
            else{
                ans.push_back(a[i]);
            }
            k++;
        }
    }
    cout<<ans<<endl;
}
