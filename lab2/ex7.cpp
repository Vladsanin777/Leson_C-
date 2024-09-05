#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<pow(M_E, -z * y) * sin(x * z - y) - sqrt(abs(y * z + x))<<endl<<"b = "<<y * sin(x * pow(z, 2) * cos(2) * z)<<endl;
}
