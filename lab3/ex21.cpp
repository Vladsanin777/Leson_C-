#include <iostream>
#include <cmath>

using namespace std;

double sin_deg(double a){return sin(a * M_PI / 180.0);}

int main(){
	double a, A, C, S;
	cin>>a>>A>>C;
	S = pow(a, 2)*sin_deg(A)*sin_deg(C)/2*sin_deg(180-A-C);
	cout<<"Площадь треугольника = "<<S<<endl<<"Высота треугольника = "<<2*S/a<<endl;
}
