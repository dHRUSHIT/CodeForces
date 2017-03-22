//1B. Spreadsheets

#include<iostream>
#include<cstdlib>
#include<string.h>
#include<algorithm>
using namespace std;
int N;

void rxcytoexcel(char str[20]){
	char row[10]={'\0'},col[10]={'\0'};
	
	int i = 1;
	for(int j=0;isdigit(str[i]);j++,i++)
		row[j] = str[i];
	i++;
	for(int j=0;isdigit(str[i]) && i<strlen(str);i++,j++)
		col[j] = str[i];
	int numcols = atoi(col);
	char output[20] = {'\0'};
	int d=26,o_i=0;
	// t is used to take care of the case when the numcols is divisible by 26
	int t=0;
	while(numcols>0){
		if(numcols%26 == 0)
			numcols--,t++;
		output[o_i++] = char(numcols%26 + 64 + t);
		if(t) t--;
		numcols /= d;
	}
	int l = strlen(output);
	while(l--)
		cout<<output[l];
	
		
	cout<<row<<endl;
}

exceltorxcy(char str[20]){
	char output[20];
	int o_i=0;
	int l = strlen(str);
	while(!isdigit(str[o_i])) o_i++;
	cout<<"R";
	for(int i=o_i;i<l;i++) cout<<str[i];
	cout<<"C";
	int col = 0;
	for(int i=o_i-1,d=1;i>=0;i--){
		col += (str[i] - 'A' + 1)*d;
		d*=26;
	}
	
	cout<<col<<endl;
}

int main(){
	int T;
	char input[20];
	cin>>T;
	
	while(T--){
		cin>>input;
		
		// need to decide if the input is of form char digit char digit or  CA
		// cant use the input[0] == 'R' && input[1] is digit for case R853
		bool b = false;
		int len = strlen(input);
		int temp=0;
		while(isalpha(input[temp])) temp++;
		for(;!b & temp<len;temp++)
			b |= isalpha(input[temp]);
		
		
		if(b){
			rxcytoexcel(input);
		}else{
			exceltorxcy(input);
		}
	}
}
