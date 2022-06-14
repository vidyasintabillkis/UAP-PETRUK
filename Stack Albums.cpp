#include <iostream>
#include <conio.h>
#include <stack>
using namespace std; 

string album[]= {"EXO - The War", 
		"Red Velvet - Bloom",
		"NCT DREAM - Hot Sauce",
		"EXO - Don't Mess Up My Tempo",
		"D.O  - Empathy The 1st Mini Album",
		"NCT 127 - Sticker",
		"Aespa - SAVAGE The 1st Mini Album", 
		"NCT - Universe",
		"ONEW - DICE The 2nd Mini Album",
		"Baekhyun - BAMBI the 3rd Mini Album"};

int harga[]= {275000, 320000, 289000, 312000, 278000, 315000, 273000, 326000, 265000, 284000};

stack<int> tumpukan;
int total = 0, input;

void print(stack<int> x){
    stack<int> xy = x;
	  while (!xy.empty()) {
        cout << ">> "<< album[xy.top() - 1]<<endl; cout << "   Harga:  Rp. " << harga[xy.top() - 1] << endl;
        xy.pop();
    }
}

void daftar(){
    cout << "=====================================\n"
         << "Daftar album yang tersedia:\n";
    for (int i=0; i < 10; i++){
        cout << i+1 <<". "<< album[i] << endl;
    }
    cout << "=====================================";
}

void push (){
	cout << "Pilih : ";
	cin >> input;
	if (input > 10){
		cout << "Album tidak tersedia!" << endl;
	}
	else {
		tumpukan.push(input);
		total = total + harga[input-1];
	}
	getch();
}

void pop(){
	if(!tumpukan.empty()){
        cout << "Data dihapus.\n";
		tumpukan.pop();
		total = total-harga[input-1];
    }
	

void size(){
	if (!tumpukan.empty()){
		cout << "Ada " << tumpukan.size() << " album di dalam tumpukan anda saat ini.\n";
	}
	else{
		cout << "Tumpukan kosong\n";
	}
	getch();
}

void pay(){
	int bayar, minus, kurang;
	cout << "Total Pembelian\t : Rp. " << minus << endl;
	cout << "Bayar\t\t : Rp. "; cin >> bayar;
	
	while (bayar<total){
		minus = total-bayar;
		cout << "Sisa Belum Dibayar\t : Rp. " << minus << endl;
		cout << "Bayar Kembali\t\t : " << "Rp. " ; cin >> kurang;
		bayar += kurang;
	}
	cout << "Kembali\t\t : Rp. " << bayar-total <<endl;
	cout << "Terimakasih telah berbelanja" <<endl;
	getch(){
}
	
void display(){ //berfungsi untuk menampilkan pilihan menu
	cout << "\n1. Tambah Album"
    	 << "\n2. Hapus album sebelumnya"
         << "\n3. Banyak isi tumpukan"
         << "\n4. Bayar"; 
}

int main(){
	int choose;
    do {
        cout << "Program pembelian album"<< endl;
        if(!tumpukan.empty()){
            cout << "Daftar tumpukan anda: " << endl ;
            print(tumpukan);
        }else {
            cout << "[kosong]\n";
        }
	    
	return 0; 
}
