#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		stack <char> s1;
		int count = 0,ok=1;
		for(int i = 0; i < s.length();  i++){
			if(s[i] =='(' or s[i] =='{' or s[i] =='[') s1.push(s[i]);
			else if(s[i] == ')' or s[i] == '}' or s[i]== ']'){
				if(s1.empty()){
					ok = 0;
					break;
				}
				else if(s[i] == ')' and s1.top() =='(' or s[i] == '}' and s1.top() =='{' or s[i]== ']' and s1.top() =='['){
					s1.pop();
				}
				else{
					ok = 0;
					break;
				}
			}	
		}
		if(ok and s1.empty() == true) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
