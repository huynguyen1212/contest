#include<bits/stdc++.h>
using namespace std;
int IsOperator(char X){
	if(X=='+'||X=='-'||X=='*'||X=='/') return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s ; 
		cin>>s;
		stack<string> a;
	  	for(int i=s.length()-1;i>=0;i--){
	  		if(IsOperator(s[i])){
	  			string op1=a.top(); a.pop();
	  			string op2=a.top(); a.pop();
	  			string temp="("+op1+s[i]+op2+")";
	  			a.push(temp);
			  }
			else{
				a.push(string(1,s[i]));
			}
	  		
		}
		cout<<a.top()<<endl;
	}
	return 0;
}
