#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<log(sin(cos(sin(x+y+z))))<<endl<<"b = "<<pow(tan(z), 3) / sqrt(pow(x, 2) * y + pow(y, 2) * z + pow(z, 2) * x)<<endl;
}
