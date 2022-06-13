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

void size(){
	if (!tumpukan.empty()){
		cout << "Ada " << tumpukan.size() << " album di dalam tumpukan anda saat ini.\n";
	}
	else{
		cout << "Tumpukan kosong\n";
	}
	getch();
}

int main(){
	
}
