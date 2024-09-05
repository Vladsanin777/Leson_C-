#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<y*pow(tan(x), 2)*x-(z/pow(sin(x/z), 2))<<endl<<"b = "<<z*pow(M_E, -2)*cos(x*y/z)<<endl;
}
