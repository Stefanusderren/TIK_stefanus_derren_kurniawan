#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	bool b = true;
	float a[3];
	string c= "Masukan Nilai Tugas = ",d= "Masukan Nilai UTS = ",e= "Masukan Nilai UAS = ";
	for(int i =1;i<=3;i++){
		if (i==1){
			cout<<c;
		}else if(i==2){
			cout<<d;
		}else if(i==3){
			cout<<e;
		}
		cin>>a[i];
		if(a[i]>100 ||a[i]<0){
			b = false;
			if(a[i]>100){
				cout<<"Nilai lebih dari 100"<<endl;
			}else if(a[i]<0){
				cout<<"Nilai kurang dari 0"<<endl;
			}
			break;
		}
	}
	if (b == true){
		cout<<a[1]*0.3 + a[2] * 0.3 + a[3] * 0.4<<endl;
	}
	return 0;
}
