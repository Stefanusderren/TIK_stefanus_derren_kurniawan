#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {
	string a[] = {"David","Kabila","Bryan","Sydney","Gracia","Keysie","Yoel"};
	for(int i=0;i<=1000;i++){
		if (a[i] != ""){
			cout<<a[i]<<endl;
		}else{
			break;
		}
	}
	return 0;
}
