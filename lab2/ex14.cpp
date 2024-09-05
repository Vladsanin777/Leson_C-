#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<pow(sin(pow(x, 2)+y), 3)-sqrt(x/z)<<endl<<"b = "<<(pow(x, 2)/y) + cos(pow(x+z, 3))<<endl;
}
