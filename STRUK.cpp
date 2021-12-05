#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream simpan;
	char nama[10];
	int price, jumlah, jumlah_n, total=0, x;


	simpan.open("struk.txt");
	
	for(int i=1;i<6;i++){
		cout<< " \nPembelian Barang ke-"<<i<<endl;
		cout<< " ===================="<<endl;
		cout<< " Nama Barang 		:"; 
		cin>> nama;
		cout <<" Harga Satuan 		:"; 
		cin>> nama;
		cout <<" Jumlah yang Dibeli 	:"; 
		cin>> jumlah;
		
		jumlah_n=jumlah*price;
		total=total+jumlah_n;
		ulang:
		cout<<"Beli Lagi [1/0]:"; cin>>x;
		if (x == '1'){
			cout<<endl;
		}
		else if (x == '0'){
			goto next;
		}
		else{
			cout<<"Input yang anda masukkan salah"; 
			goto ulang;
		}
	}
	next:
	simpan<<" ================================"<<endl;
	simpan<<" 			NOTA BELANJA 		  "<<endl;
	simpan<<" ================================"<<endl;
	simpan<<" no| nama barang | harga satuan | total harga|"<<endl;
	for(int i=0;i<10;i++){
		simpan<<"| "<<i<<"| 	"<<nama<<" |		"<<price<<"|		"<<jumlah<<"|		"<<jumlah_n<<"|"<<endl;
	}
	simpan<<"====="<<endl;		
	simpan<<"Total							| 			"<<total<<"|"<<endl;
	simpan<<"====="<<endl;
	simpan.close();

	return 0;
}
