#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(pow(z, 2)*x+pow(M_E, -x)*cos(y*x))/(y*x-pow(M_E, -x)*sin(y*x)+1)<<endl<<"b = "<<pow(M_E, 2)*log(z+x)-pow(y, 3)*log(y-x)<<endl;
}
