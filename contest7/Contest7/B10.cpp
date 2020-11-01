#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void Nhap(){
	cin>>s1>>s2;
}
string KQ(string s){
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
	string str = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] != '(' && s[i] != ')')
		str += s[i];
	}
	return str;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		Nhap();
		s1 = KQ(s1);
		s2 = KQ(s2);
		if(s1==s2) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
