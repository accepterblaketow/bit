#include<bits/stdc++.h>
using namespace std;
long long T,base,A,B,bit;
void case1(){
	vector<char> a(bit,'0'),b(bit,'0');
	int n=bit-1;
	while(A){
		int x=A%base;
		char c=x+'0';
		a[n--]=c;
		A/=base;
	}
	n=bit-1;
	while(B){
		int x=B%base;
		char c=x+'0';
		b[n--]=c;
		B/=base;
	}
	for(int i=0;i<bit;i++){
		cout <<a[i];
	}
	cout <<'\n';
	for(int i=0;i<bit;i++){
		cout <<b[i];
	}
} 
void case2(){
	
}
void case3(){
	
}
void case4(){
	
}
void case5(){
	
}
void case6(){
	
}
void case7(){
	
}
void T1(){
	if(A > 0 && B > 0)
		case1();
	else
		case2();			
}
void T2(){
	if(A > 0 && B > 0)
		case3();
	else if(A < 0 && B < 0)
		case5();
	else
		case4();		
}
void T3(){
	if(A > 0 && B > 0)
		case3();
	else if(A < 0 && B < 0)
		case6();
	else
		case7();
}
int main(){

	
	cout <<"輸入Type代號(1,2,3):\n";
	cin >> T;
	cout <<"輸入基底b:\n";
	cin >> base;
	cout <<"輸入有效位元\n";
	cin >> bit;
	cout <<"輸入A=\n";	
	cin >> A;
	cout <<"輸入B=\n";
	cin >> B;
	
	switch(T){
		case 1:
			T1();
			break;
			
	
	}
} 
