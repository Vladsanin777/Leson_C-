#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<pow(x, 3) * pow(tan(pow(x+y, 2)), 2) + (z / sqrt(x+z))<<endl<<"b = "<<(y * pow(x, 2) - z) / (pow(M_E, z*x)-1)<<endl;
}
