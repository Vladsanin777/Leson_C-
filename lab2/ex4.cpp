#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<( pow( tan( x ), 3 ) * cos(z) - pow( sin( y ), 2 )) / pow( cos( sin( z )), 2 )<<endl<<"b = "<<sqrt((1 / sqrt(x)) + x * y * z)<<endl;
}
