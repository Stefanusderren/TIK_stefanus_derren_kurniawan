#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {
	int a ;
	string b,c;
	cout<<"masukan nilai: ";cin>>a;
	if (a % 2 ==0){
		b = "bilangan genap";
		if (a<10){
			c = "bilangan genap kurang dari 10";
		}else{
			c ="bilangan genap lebih dari 10";
		}
	}else{
		b= "bilangan ganjil";
		if (a<10){
			c = "bilangan ganjil kurang dari 10";
		}else{
			c ="bilangan ganjil lebih dari 10";
		}
	}
	cout<<b<<endl<<c<<endl;
	return 0;
}
