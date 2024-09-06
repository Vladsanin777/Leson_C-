#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(1+y)*(x+y)/pow(pow(x, 2)+4, 2)/(pow(M_E, -x)+1)<<endl<<"b = "<<(1+cos(y-2))/(pow(x, 4)/2+pow(sin(z), 2))<<endl;
}
