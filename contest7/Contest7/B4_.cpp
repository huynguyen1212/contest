#include<bits/stdc++.h>
using namespace std;
string s;
void Nhap(){
	cin>>s;
}
void KQ(){
	stack <char> a;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '{' || s[i] =='[' || s[i] =='(')
			a.push(s[i]);
		else if(s[i] == '}' || s[i] ==']' || s[i] == ')'){
			if(a.empty()){
				cout<<"NO"<<endl;
				return;
			}
			else if(s[i] == '}' && a.top() == '{'||s[i] == ']' && a.top() == '[' ||s[i] == ')' && a.top() == '(' )
				a.pop();
			else{
				cout<<"NO";
				return;
			}
		}
	}
	if(a.empty())
		cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		Nhap();
		KQ();
	}
}
