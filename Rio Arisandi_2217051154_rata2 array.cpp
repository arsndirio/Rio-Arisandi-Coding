 #include <iostream>
using namespace std;
int main (){
	int input [5], n, i ;
	double total, rata2;
	
	cout << "Input nilai : " ;
	cin >> n ;
	
	cout << "Input " <<  n  << " Angka : " <<endl ;
	
	for(i = 0; i < n; i++){
    cin >> input[i];
  }
	cout << endl;
  	total = 0;
  
  for(i = 0; i < n; i++){
    total = total+input[i];
  }
  rata2 = (total/n);
  cout << "Nilai rata-rata dari "<< n << " inputan adalah: " << rata2;

  cout << endl;
  return 0;
}
	

