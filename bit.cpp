#include<bits/stdc++.h>
using namespace std;
long long T,base,A,B,bit;
char trans(int x){
	if(x >= 10)
		return (x-10)+'A';
	else
		return x+'�a�b�@�@�@�@�@�@�@��0';
	
}
void case1(){
	long long C=A+B; 
	if(C>pow(2,bit-1)-1)
		cout <<"����\n";
	string s;
	while(C){
		int x=C%base;
		char c=trans(x);
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

	
	cout <<"��JType�N��(1,2,3):\n";
	cin >> T;
	cout <<"��J��b:\n";
	cin >> base;
	cout <<"��J���Ħ줸\n";
	cin >> bit;
	cout <<"��JA=\n";	
	cin >> A;
	cout <<"��JB=\n";
	cin >> B;
	
	switch(T){
		case 1:
			T1(); 
			break;
			
	
	}
}  
