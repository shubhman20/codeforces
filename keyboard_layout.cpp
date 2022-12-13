#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	string a,b,c;
    cin>>a>>b>>c;
    string ans;
    for(int i=0;i<c.size();i++){
        char s = c[i];
        if(s>='0'&&s<='9')
            ans.push_back(s);
        else if(s>='A'&&s<='Z'){
            s+=32;
            for(int j=0;j<26;j++){
                if(a[j]==s){
                    ans.push_back(b[j]-32);
                    break;
                }
            }
        }
        else{
            for(int j=0;j<26;j++){
                if(a[j]==s){
                    ans.push_back(b[j]);
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
