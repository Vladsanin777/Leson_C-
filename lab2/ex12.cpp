#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(sin(x+y)+cos(z)) / (sin(cos(x + y + z)))<<endl<<"b = "<<sqrt(x+sqrt(y+sqrt(z+sqrt(x*y*z))))<<endl;
}
