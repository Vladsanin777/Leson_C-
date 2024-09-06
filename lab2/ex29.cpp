#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<2*pow(tan(x), 2)/3*pow(sin(y), 2)*pow(cos(z), 2)<<endl<<"b = "<<(1/(1+(2*x-1)/sqrt(y)))+(1/(1-(2*y+1)/sqrt(z)))<<endl;
}
