#include<bits/stdc++.h>
using namespace std;
long long T,base,A,B,bit;
char trans(int x){
	if(x >= 10)
		return (x-10)+'A';
	else
		return x+'0';
	
}
void case1(){
	long long C=A+B; 
	if(C>pow(base,bit-1)-1){
		cout <<"結果為:";
		cout <<"溢位\n";
		return;
	} 
	string s;
	while(C){
		int x=C%base;
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout.width(bit);
	cout.fill('0');
	cout << s <<'\n';
} 
void case2(){
	long long C=A+B;
	int sb;
	if(C>0)
		sb=0;
	else
		sb=base-1;
	string s;
	C=abs(C);
	while(C){
		int x=(C%base);
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout <<sb;
	cout.width(bit-1);
	cout.fill('0');
	cout  << s <<'\n';
}
void case3(){
	long long C=A+B; 
	if(C>pow(base,bit-1)-1){
		cout <<"結果為:";
		cout <<"溢位\n";
		return;
	} 
	string s;
	while(C){
		int x=C%base;
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout.width(bit);
	cout.fill('0');
	cout << s <<'\n';
}
void case4(){
	long long C=A+B;
	int sb;
	if(C>0)
		sb=0;
	else
		sb=base-1;
	string s;
	if(C<0) 
		C=pow(base,bit-1)-1+C;
	while(C){
		int x=(C%base);
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout <<sb;
	cout.width(bit-1);
	cout.fill('0');
	cout  << s <<'\n';
}
void case5(){
	long long C=A+B; 
	if(C<-(pow(base,bit-1)-1)){
		cout <<"結果為:";
		cout <<"溢位\n";
		return;
	} 
	string s;
	C=abs(C);
	while(C){
		int x=C%base;
		char c=trans((base-1)-x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout << base-1;
	cout.width(bit-1);
	cout.fill('0');
	cout << s <<'\n';
}
void case6(){
	long long C=A+B; 
	if(C<-pow(base,bit)){
		cout <<"結果為:";
		cout <<"溢位\n";
		return;
	} 
	string s;
	C=pow(base,bit-1)+C;
	while(C){
		int x=C%base;
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout << base-1;
	cout.width(bit-1);
	cout.fill('0');
	cout << s <<'\n';
}
void case7(){
	long long C=A+B;
	int sb;
	if(C>0)
		sb=0;
	else
		sb=base-1;
	string s;
	if(C<0)
		C=pow(base,bit-1)+C;
	while(C){
		int x=(C%base);
		char c=trans(x);
		s=c+s;
		C/=base;
	}
	cout <<"結果為:";
	cout <<sb;
	cout.width(bit-1);
	cout.fill('0');
	cout  << s <<'\n';
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

	
	cout <<"輸入Type代號(1:帶號大小,2:基底減一補數,3:基底補數):\n";
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
		case 2:
			T2(); 
			break;
		case 3:
			T3(); 
			break;
	}
}  
