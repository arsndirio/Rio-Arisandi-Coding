#include <iostream>;
using namespace std;

int main(){
	//L=pi*r(r+s)
	//V=1/3*pi*r*r*t;
	double L,V,r,t,s;
	cin>>r;
	cin>>t;
	cin>>s;
	
	L=3.14*r*r*t/3;
	V=3.14*r*t;
	cout<<L<<endl;
	cout<<V;
	
	
	return 0;
}
