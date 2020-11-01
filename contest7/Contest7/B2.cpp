#include<bits/stdc++.h>
using namespace std;
string s;
int n;
//stack<int > a;
int a[100001];
int t  = -1;
void push(int n){
	t++;
	a[t] = n;
}
void pop(){
	if(t >=0)
		t--;
}
void show(){
	if(t >= 0){
//		for(int i = 0; i <= t; i++){
			cout<<a[t]<<" ";
//		}
		cout<<endl;
	}
	else
		cout<<"NONE"<<endl;
	
}
int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>s;
		if(s == "PUSH"){
			cin>>n;
			push(n);
		}
		else if(s == "POP"){
			pop();
		}
		else if(s == "PRINT"){
			show();
		}
	}
}
