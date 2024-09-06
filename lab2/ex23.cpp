#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(sqrt(abs(x-1))-pow(abs(y), 1/3))/(1+(pow(x, 2)/2)+(pow(y, 2)/4))<<endl<<"b = "<<x*(atan(z)+pow(M_E, -(x+3)))<<endl;
}
