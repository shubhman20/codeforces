#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> front(m);
    for(int i=0;i<m;i++){
        cin>>front[i];
    }
    vector<int>row(n);
    for(int i=0;i<n;i++){
        cin>>row[i];
    }
    vector<vector<int>>ans(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>ans[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ans[i][j]==1){
                ans[i][j]=min(row[i],front[j]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
    
