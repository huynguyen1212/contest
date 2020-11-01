#include<bits/stdc++.h>
using namespace std;
string s;
void Nhap(){
	cin>>s;
}
void KQ(){
	stack<char>a;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(' || s[i] == ')' && a.size() == 0)
			a.push(s[i]);
		else if(s[i] == ')'){
			if(a.size() > 0 && a.top() == '(') a.pop();
			else
			a.push(s[i]);
		}
	}
	int d1 = 0;
	int d2 = 0;
	while(a.size()){
		if(a.top() == ')')
			d1++;
		else
			d2++;
		a.pop();
	}
	int kq = d1/2 + d2/2 + d1%2 + d2%2;
	cout<<kq<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		Nhap();
		KQ();
	}
}
