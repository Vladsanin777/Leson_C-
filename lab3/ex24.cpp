#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, C, C_rad;
	cin>>a>>b>>C;
	C_rad = C*M_PI/180.0;
	cout<<"Третья сторона = "<<sqrt(pow(a, 2)+pow(b, 2)-2*a*b*cos(C_rad))<<endl<<"Площадь треугольника = "<<a*b*sin(C_rad)/2<<endl;
}
