#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

enum mapping{ A = 0,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
};



string excel2rxcy(char str[]){
	cout<<"excel2rxcy\n";
}

string rxcy2excel(char str[]){
	cout<<"rxcy2excel\n";
	int col,row,i=1;
	char colstr[10];
	char rowstr[10];
	
	for(int j=0;i<strlen(str) && isdigit(str[i]);i++,j++){
		rowstr[j] = str[i];
	}
	row = atoi(rowstr);
	i++;
	
	for(int j=0;i<strlen(str) && isdigit(str[i]);i++,j++){
		colstr[j] = str[i];
		
	}
	col = atoi(colstr);
//	cout<<row<<" "<<col;
	int t=0,del=1;
	char ret[10]={'\0'};
	while(col>0){
		col
	}
	return "";
}

int main(){
	int T;
	cin>>T;
	
	char input[10];
	while(T--){
		cin>>input;
		
		if(input[0] == 'R' && isdigit(input[1]))
			cout<<rxcy2excel(input);
		else
			cout<<excel2rxcy(input);
	}
}

