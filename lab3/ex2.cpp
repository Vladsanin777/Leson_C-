#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b;
	cin>>a>>b;
	cout<<"Гипотенуза = "<<sqrt(pow(a, 2)+pow(b, 2))<<endl<<"Прощадь треугольника = "<<a*b/2<<endl;
}
