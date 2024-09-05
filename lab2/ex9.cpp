#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<sqrt(log(pow(x, 2) + sin(y) + z + 1))<<endl<<"b = "<<(1 + x)/(pow(z, 2) + 3 * y)/sqrt(pow(y, 2) + pow(z, 2))<<endl;
}
