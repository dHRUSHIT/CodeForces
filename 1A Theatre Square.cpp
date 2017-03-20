#include<iostream>

using namespace std;

int main(){
	int n,m,a;
	
	cin>>n>>m>>a;
	long long l,b;
	l = (n+a-1)/a;
	b = (m+a-1)/a;
	
	cout<<l*b;
}

