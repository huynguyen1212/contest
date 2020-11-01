#include<bits/stdc++.h>
using namespace std;
int isOperator(char X){
	if(X=='+'||X=='-'||X=='*'||X=='/') return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string>a;
		for(int i = 0; i < s.length(); i++){
			if(isOperator(s[i])){
				string op1 = a.top(); a.pop();
				string op2 = a.top(); a.pop();
				string temp = "(" +op2+s[i]+op1+")";
				a.push(temp);
			}
			else
				a.push(string(1,s[i]));
		}
		cout<<a.top()<<endl;
	}
	return 0;
}
