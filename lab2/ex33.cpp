#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<pow(acos(sin(y+sqrt(pow(x, 3)+1))), 1/3)<<endl<<"b = "<<sqrt(log(tan(1/8*x))-pow(x+3, 2/3))/(x+y*z)<<endl;
}
