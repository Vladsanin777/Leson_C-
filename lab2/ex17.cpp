#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z, a;
	cin>>x>>y>>z;
	a = log(z+pow(x, 2))+pow(sin(x/y), 2);
	cout<<"a = "<<a<<endl<<"b = "<<pow(M_E, -x)*(x+sqrt(x+a))/(x-sqrt(abs(x-y)))<<endl;
}
