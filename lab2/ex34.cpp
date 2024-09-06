#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<x*pow(cos(x), 2)+2*y*sin(x)*cos(y)+4*z*pow(sin(y), 2)<<endl<<"b = "<<(1+pow(tan(pow(x, 2)), 2)+pow(tan(y), 4))/(1+pow(1/tan(z), 2))<<endl;
}
