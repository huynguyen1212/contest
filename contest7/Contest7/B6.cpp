#include<bits/stdc++.h>
using namespace std;
string s;
bool check;
void Nhap(){
	getline(cin,s);
}
void KQ(){
	stack<char> a;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ')'){
			check = true;
			char top = a.top();
			a.pop();
			while(top != '('){
				if(top == '+' || top =='*' || top == '-' || top =='/'){
					check = false;
				}
				top = a.top();a.pop();
			}
			if(check) break;
		}
		else
			a.push(s[i]);
	}
	if(check) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
int main(){
	int T;
	cin>>T;
	cin.ignore();
	while(T--){
		Nhap();
		KQ();
	}
}
