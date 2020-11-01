#include<bits/stdc++.h>
using namespace std;
string s;
void Nhap(){
	cin>>s;
}
void KQ(){
	stack<char> a;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(')
			a. push(s[i]);
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		Nhap();
		KQ();
	}
}
