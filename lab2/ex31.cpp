#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(sqrt(1+x)+(1/sqrt(1+y)))*(1+sqrt(1+pow(z, 2)))<<endl<<"b = "<<1+(sin(z)/log(y)-1)<<endl;
}
