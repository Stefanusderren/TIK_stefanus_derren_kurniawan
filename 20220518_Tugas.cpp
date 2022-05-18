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
	string c[] = {"","Kilometer","Hektameter","Dekameter","Meter","Desimeter","Centimeter","Milimeter"},d;
	while(d !="n"){
		blabla();
		balik1:
		cout<<"Pilih satuan awal: ";cin>>a;
		if(a<1 || a>7){
			cout<<endl;
			cout<<"Nilai Tidak valid!"<<endl;
			cout<<endl;
			goto balik1;
		}
		cout<<endl;
		cout<<"Masukan "<<"nilai "<<c[a]<<": ";cin>>nilai;
		cout<<endl;
		blabla();
		balik2:
		cout<<"Pilih konversi: ";cin>>b;
		if(b<1 || b>7){
			cout<<endl;
			cout<<"Nilai Tidak valid!"<<endl;
			cout<<endl;
			goto balik2;
		}
		cout<<endl;
		if(a>b){
			int temp = a-b;
			cout<<"Hasil: "<<nilai/pow(10,temp)<<" "<<c[b]<<endl;
		}else if(a<b){
			int temp = b-a;
			cout<<"Hasil: "<<nilai*pow(10,temp)<<" "<<c[b]<<endl;
		}else if(a==b){
			cout<<"Hasil: "<<nilai<<" "<<c[a]<<endl;
		}
		cout<<endl<<"Mau lanjut?"<<endl<<"ketik y atau n: ";cin>>d;
	}
	cout<<"Terima Kasih"<<endl;
}
