#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<sqrt(z*x*sin(2*x)+pow(M_E, -x)*(x+y))<<endl<<"b = "<<cos(pow(x, 3))-(x/sqrt(pow(z, 2)+pow(y, 2)))<<endl;
}
