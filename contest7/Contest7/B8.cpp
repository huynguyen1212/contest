#include<bits/stdc++.h>
using namespace std;
string s;
void Nhap(){
	cin>>s;
}
void KQ(){
	stack<int>a;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(') a.push(i);
		else if(s[i] == ')'){
			if(a.size() > 0){
				int top = a.top();
				a.pop();
				if(top == 0) continue;
				else if(s[top-1] == '+') continue;
				else if(s[top-1]=='-'){
					for(int j = top; j <= i; j++){
						if(s[j] == '+') s[j] = '-';
						else if(s[j] == '-') s[j] ='+';
					}
				}
			}
		}
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] != '(' && s[i] != ')')
		cout<<s[i];
	}
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
