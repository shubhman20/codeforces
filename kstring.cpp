#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    vector<int> a(26,0);
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(a[i]%n==0){
            int temp = a[i]/n;
            while(temp--){
                ans.push_back('a'+i);
            }
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<-1<<endl;
    else{
        for(int i=0;i<n;i++){
            cout<<ans;
        }
    }
    
 
}
