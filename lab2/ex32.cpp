#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<sqrt((z/x*(y/z+x/y))+(2*sqrt(z*y/x)))<<endl<<"b = "<<z/y+pow(x, 3)*pow(cos(z), 2)*pow(tan(y), 2)<<endl;
}
