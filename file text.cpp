#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;
int main(){
	
	ifstream myfile;
	char sv_text;
	
	myfile.open("DDPPRATIKUM.txt");
	
	cout<<"MEMBACA FILE"<<endl;
	cout<<"----------------"<<endl;
	
	if(!myfile.fail())
	{
		cout<<"Isi dari File :  "<<endl;
		
		while (!myfile.eof())
		{
			myfile.get(sv_text);
			cout<<sv_text;
		}
		myfile.close();	
	}else{
		cout<<"File Tidak Ditemukan"<<endl;
	}
		getche();
		return EXIT_SUCCESS;
}
