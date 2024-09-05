#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(pow(x, 2) * (x + 1) / y)-pow(sin(x+z), 2)<<endl<<"b = "<<sqrt(x*y/z)+pow(cos(pow(x+y, 3)), 2)<<endl;
}
