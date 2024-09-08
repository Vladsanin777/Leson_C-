#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, S, P_half;
	cin>>a>>b>>c;
	P_half = (a+b+c)/2;
	S = sqrt(P_half*(P_half-a)*(P_half-b)*(P_half-c));
	cout<<"Радиус вписаной окружности = "<<S/P_half<<endl<<"Радиус описаной окружности = "<<a*b*c/(4*S)<<endl;
}
