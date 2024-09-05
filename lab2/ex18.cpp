#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z, a;
	cin>>x>>y>>z;
	cout<<"a = "<<(pow(z, 2*x)+pow(y, -x)*cos(z+y)*x)/x+1<<endl<<"b = "<<sqrt(pow(x, 2)+y)-pow(y, 2)*pow(sin((x+z)/x), 3)<<endl;
}
