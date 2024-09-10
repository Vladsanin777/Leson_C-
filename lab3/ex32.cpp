#include <iostream>
#include <cmath>

using namespace std;

double sin_deg(double a){return sin(a*M_PI/180);}

int main(){
	double a, A;
	cin>>a>>A;
	cout<<"Объём треугольной пирамиды = "<<pow(a, 3)*sqrt(3)/12*sqrt(3*pow(sin_deg(A), 2)/(1-pow(sin_deg(A), 2)))<<endl;
}
