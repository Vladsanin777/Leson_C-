#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double m1, m2, r;
	cin>>m1>>m2>>r;
	cout<<"Сила притяжения = "<<6.67e-11*m1*m2/pow(r, 2)<<endl;
}
