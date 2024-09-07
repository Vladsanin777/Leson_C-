#include <iostream>
#include <cmath>

using namespace std;

double P_half;

// Подсчёт биссектрис
double calculation_bisector(double b, double c, double a){return 2*sqrt(b*c*P_half*(P_half-a))/(b+c);}

int main(){
	double a, b, c;
	cin>>a>>b>>c;
	P_half = (a+b+c)/2;
	cout<<"Биссектриса A = "<<calculation_bisector(b, c, a)<<endl<<"Биссектриса B = "<<calculation_bisector(a, c, b)<<endl<<"Биссектриса C = "<<calculation_bisector(a, b, c)<<endl;
}
