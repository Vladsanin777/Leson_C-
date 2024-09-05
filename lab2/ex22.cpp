#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<"a = "<<sin(x)/sqrt(1+pow(y, 2)*pow(sin(x), 2))<<endl<<"b = "<<pow(M_E, -y)*sqrt(x+1)+pow(M_E, -2)*sqrt(x+1.5)<<endl;
}
