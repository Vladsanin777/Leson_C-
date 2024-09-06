#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(2-sqrt((x-y)/20*x))*(2+sqrt((x+y)/20*y))<<endl<<"b = "<<(cos(x)*cos(z)-cos(x+z))/(sin(y)*sin(x)+sin(x-y))<<endl;
}
