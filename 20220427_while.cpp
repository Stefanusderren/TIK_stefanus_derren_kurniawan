#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {
	for(int i=1; i<=10;i++){
		int a= 0;
		while (a++ < 10){
			cout<< i <<" * "<<a<<" = "<<a*i<<endl;
		}
		cout<<"======================================"<<endl;
	}
	return 0;
}
