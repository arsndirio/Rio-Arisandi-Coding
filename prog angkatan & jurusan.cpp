#include <iostream>

using namespace std;

int main()
{
	int angkatan;
	string jurusan;
	
	cin >> angkatan;
	getchar();
	getline(cin, jurusan);
	
	cout << "angkatan: "<<angkatan << endl;
	cout << "jurusan: " <<jurusan << endl;
	
	return 0;
}
