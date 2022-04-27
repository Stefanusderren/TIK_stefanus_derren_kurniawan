#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {
	int bta,btw;
	cout<<"Masukan Batas Bawah: ";cin>>btw;
	cout<<"Masukan Batas Atas: ";cin>>bta;
	if(btw > bta){
		cout<<"Batas bawah lebih dari batas atas";
		return 0;
	}else{
		while(btw++ < bta){
			cout<<"Data ke - "<<btw<<endl;
		}
	}
	return 0;
}
