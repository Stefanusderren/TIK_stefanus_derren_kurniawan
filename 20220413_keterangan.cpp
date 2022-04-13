#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {
	int a;
	string  b;
	cout<<"masukan nilai: ";
	cin>>a;
	if (a>100 || a<0){
		b ="Diluar jangkauan";
	}else if (a>=90){
		b ="Sangat memuaskan";
	}else if (a>=80){
		b ="memuaskan";
	}else if (a>=75){
		b ="cukup";
	}else{
		b ="Tidak lulus";
	}
	cout<<b<<endl;
	return 0;
}
