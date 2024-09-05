#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<abs( pow( x, y / x ) - pow( y / x, 1 / 3 ) )<<endl<<"b = "<<( y - x ) * ( y - z * ( y - x )) / ( 1 + pow( y - x, 2))<<endl;
}
