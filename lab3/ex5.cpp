#include <iostream>
#include <cmath>

using namespace std;

//Подсчёт градусной меры угла
double corner(double a, double b, double c){return acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c))*180/M_PI;}

int main(){
	double a, b, c;
	cin>>a>>b>>c;
	cout<<"Градусная мера угла A = "<<corner(a, b, c)<<endl<<"Градусная мера угла B = "<<corner(b, a, c)<<endl<<"Градусная мера угла C = "<<corner(c, a, b)<<endl;
}
