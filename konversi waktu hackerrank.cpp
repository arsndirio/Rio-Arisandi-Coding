#include <iostream>
using namespace std;
int main(){
	int j,m,d;
	cin>>d;
	
	j=4000/3600;
	m=(4000%3600)/60;
	d=(4000%3600)%60;
	cout<<j<<" "<<m<<" "<<d;
	
	return 0;
}
