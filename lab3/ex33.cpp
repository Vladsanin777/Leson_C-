#include <iostream>
#include <cmath>

using namespace std;

double sin_deg(double a){return sin(a*M_PI/180);}

int main(){
	double R, H, a;
	cin>>R>>H>>a;
	cout<<"Полная поверхность цилиндра = "<<2*M_PI*H*(2*R-a)+2*M_PI*(2*pow(R, 2)-2*R*a+pow(a, 2))<<endl;
}
