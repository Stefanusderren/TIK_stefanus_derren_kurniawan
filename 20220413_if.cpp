#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>

using namespace std;


int main() {
	int a;
	cout<<"masukan nilai: "
	cin>>a;
	if(a%2==0){
		cout<<"Bilangan yang dimasukan merupakan bilangan genap"<<endl;
	}else if(a<0){
		cout<<"bilangan kurang dari 0 dan bukan bilangan genap"<<endl;
	}else{
		cout<<"bukan bilangan genap"<<endl;
	}
	return 0;
}
