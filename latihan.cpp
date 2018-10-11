#include <iostream>
#include <iomanip>
using namespace std;

struct movies {
	char title[20],tahun[10];
};
typedef movies moviesArr[50];


int main (){
	int pil,b_data,pilihan;
	moviesArr x ;
	
	while (pil != 3) {
	cout<<"-+-+-+-+-+-+-+-+-+-+\n"<<endl;
	cout<<"MOVIE PROGRAM\n"<<endl;
	cout<<"-+-+-+-+-+-+-+-+-+-+\n"<<endl;
	cout<<"1. Masukkan Data\n";
	cout<<"2. Tampil Data\n";
	cout<<"3. Keluar\n";
	cout<<"Pilih menu : ";
	cin>>pil;
	cout<<endl;

	
	   if (pil == 1) {
            cout << "Masukan banyaknya data :";
            cin >> b_data;
            for (int i = 0; i < b_data; i++) {
                cout << "Data ke- " << i + 1;
                cout << "\nMasukan Judul film : ";
                cin >> x[i].title;
                cout << "masukan tahun pembuatan: ";
                cin >> x[i].tahun;
                cout << endl;
            }
        } else if (pil == 2) {
            for (int i = 0; i < b_data; i++) {
               cout << "Data ke- " << i+1 ;
               cout<<endl;
               cout<<"\nTitle :";
			   cout<<x[0].title<< " ";
			   cout<<endl;
			   cout<<"\Tahun :";
               cout<<x[0].tahun << " " << endl;

           	 }
   		 }
	}
}
    
