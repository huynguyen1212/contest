#include<bits/stdc++.h>
using namespace std;
string s;
int n;
//stack<int > a;
int a[1001];
int t  = -1;
void push(int n){
	t++;
	a[t] = n;
}
void pop(){
	t--;
}
void show(){
	if(t >= 0){
		for(int i = 0; i <= t; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	else
		cout<<"empty"<<endl;
	
}
int main(){
	while(cin>>s){
		if(s == "push"){
			cin>>n;
			push(n);
		}
		else if(s == "pop"){
			pop();
		}
		else if( s == "show"){
			show();
		}
	}
}
