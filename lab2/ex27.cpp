#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<2*cos(x-M_PI/6)/(0.5+pow(sin(y), 2))<<endl<<"b = "<<1+pow(z, 2)/(3+pow(z, 2)/5)<<endl;
}
