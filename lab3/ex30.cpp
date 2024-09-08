#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, P, P_half;
	cin>>a>>b>>c;
	P = a+b+c;
	P_half = P/2;
	cout<<"P треугольника = "<<P<<endl<<"S треугольника = "<<sqrt(P_half*(P_half-a)*(P_half-b)*(P_half-c))<<endl;
}
