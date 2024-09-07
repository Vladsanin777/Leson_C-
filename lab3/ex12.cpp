#include <iostream>
#include <cmath>

using namespace std;

double length_side(double x2, double x1, double y2, double y1){return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));}

int main(){
	double x1, x2, x3, y1, y2, y3, P, P_half, AB, BC, CA;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	AB = length_side(x2, x1, y2, y1);
	BC = length_side(x3, x2, y3, y2);
	CA = length_side(x1, x3, y1, y3);
	P = AB+BC+CA;
	P_half = P/2;
	cout<<"Периметр треугольнка = "<<P<<endl<<"Площадь треугольника = "<<sqrt(P_half*(P_half-AB)*(P_half-BC)*(P_half-CA))<<endl;
}
