#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<sqrt(( 1 + cos( y )) / ( pow( tan( 2 ), 3 ) * z ) + 1 )<<endl<<"b = "<<sqrt( x + y * z ) * 2 / x * z * y<<endl;
}
