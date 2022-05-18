#include <iostream>
#include <cmath>
using namespace std;
void blabla(){
	cout<<"1. km"<<endl;
	cout<<"2. hm"<<endl;
	cout<<"3. dam"<<endl;
	cout<<"4. m "<<endl;
	cout<<"5. dm"<<endl;
	cout<<"6. cm"<<endl;
	cout<<"7. mm"<<endl;
}
int main()
{
	cout<<"=========================================="<<endl;
	cout<<"Tugas TIK Stefanus Derren Kurniawan XI MIA"<<endl;
	cout<<"=========================================="<<endl;
	system("Color 0A");
	int a,b;
	float nilai;
	string c[] = {"","Kilometer","Hektameter","Dekameter","Meter","Desimeter","Centimeter","Milimeter"};
	blabla();
	cout<<"Pilih satuan awal: ";cin>>a;
	cout<<endl;
	cout<<"Masukan "<<"nilai "<<c[a]<<": ";cin>>nilai;
	cout<<endl;
	blabla();
	cout<<"Pilih konversi: ";cin>>b;
	if(a>b){
		int temp = a-b;
		cout<<"Hasil: "<<nilai/pow(10,temp)<<" "<<c[b];
	}else if(a<b){
		int temp = b-a;
		cout<<"Hasil: "<<nilai*pow(10,temp)<<" "<<c[b];
	}else if(a==b){
		cout<<"Hasil: "<<nilai<<" "<<c[a];
	}
}
