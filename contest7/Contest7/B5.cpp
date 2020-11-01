#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void Nhap(){
	cin>>s;
	n = s.size();
}
void KQ(){
	int kq = 0;
	stack<int > a;
	a.push(-1);
	for(int i = 0; i < n; i++){
		if(s[i] == '(')
			a.push(i);
		else{
			a.pop();
			if(a.size() > 0)
				kq = max(kq,i - a.top());
			else
				a.push(i);
		}
	}
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
