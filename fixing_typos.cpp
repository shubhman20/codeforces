#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){
	#define fast ios_base::sync_with_stdio(false);
    cin.tie(0);
	string s;
	cin>>s;
	string ans="";
	int n = s.size();
	
	for(int i=0;i<n;i++){
	    char ch = s[i];
    //put first two ch into ans if given string size is >=2
	    if(i<2){
	        ans.push_back(ch);
	    }
        //if last two characters of answer is same as current character of given string then skip the character
	    else if(ans[ans.size()-1]==ch && ans[ans.size()-2]==ch){
	        continue;
	    }
        //if current character is same as last character of ans and second last and third last character are same in ans then skip the current character 
	    else if(ans.size()>=3 && (ans[ans.size()-2]==ans[ans.size()-3]) && ans[ans.size()-1]==ch){
	        continue;
	    }
	    else{
	        ans.push_back(ch);
	    }
	}
	cout<<ans<<endl;
    
}
