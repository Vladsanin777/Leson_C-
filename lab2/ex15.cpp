#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<pow(x*tan(y)+abs(sin(y)), 1/3)<<endl<<"b = "<<x*cos(z*y*sin(y))-1<<endl;
}
