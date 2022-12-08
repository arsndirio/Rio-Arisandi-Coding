#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main (){
	ofstream myfile;
	
	myfile.open("DDPPRATIKUM.txt", ios::app);
	 cout<<"--------------"<<endl;
	 cout<<"MENULIS FILE"<<endl;
	 cout<<"--------------"<<endl;
	 
	 if(!myfile.fail()){
	 	myfile<<"Belajar DDP Asik Sekali :)"<<endl;
	 	myfile.close();
	 	cout<<"Text Berhasil ditulis kedalam bentuk file"<<endl;
	 }
	 else{
	 	cout<<"File tidak ditemukan"<<endl;
	 }
	 	getche();
	 	return EXIT_SUCCESS;
	 }

