#include<bits/stdc++.h>
using namespace std;
string s;
stack <char> a;
void Nhap(){
	getline(cin,s);
	s = s + " ";
//	for(int i = 0; i <= s.length(); i++)
//		a.push(s[i]);
}
void KQ(){
	for(int i = 0; i < s.length(); i++){
		while(s[i] != ' ' && i < s.length()){
			a.push(s[i]);
			i++;
		}
		while(!a.empty()){
			cout<<a.top();
			a.pop();
		}
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		Nhap();
		KQ();
	}
}
