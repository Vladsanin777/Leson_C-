#include <iostream>
#include <cmath>

using namespace std;

// Подсчёт медиан
double calculation_median(double b, double c, double a){return sqrt(2*pow(b, 2)+2*pow(c, 2)-pow(a, 2))/2;}

int main(){
	double a, b, c, P_half, S2;
	cin>>a>>b>>c;
	P_half = (a+b+c)/2;
	S2 = sqrt(P_half*(P_half-a)*(P_half-b)*(P_half-c))*2;
	cout<<"Медиана A = "<<calculation_median(b, c, a)<<endl<<"Медиана B = "<<calculation_median(a, c, b)<<endl<<"Медиана C = "<<calculation_median(a, b, c)<<endl;
}
