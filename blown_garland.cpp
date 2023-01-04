#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    string s;
    cin>>s;
    vector<char>v(4,'!');
    int val=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='!'&&v[i%4]=='!'){
            v[i%4]=s[i];
            val++;
            if(val==4) break;
        }
    }
    int r=0,b=0,y=0,g=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='!'){
            if(v[i%4]=='R')
                r++;
            else if(v[i%4]=='B')
                b++;
            else if(v[i%4]=='Y')
                y++;
            else
                g++;
        }
    }
    cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
}
    
