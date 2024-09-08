#include <iostream>
#include <cmath>

using namespace std;
// Поиск длины стороны
double length_side(double x2, double x1, double y2, double y1){return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));}
// Поиск градуса угла
double search_coner(double a, double b, double c){return acos((pow(a, 2)+pow(b, 2)-pow(c, 2))/(2*a*b))*180/M_PI;}

int main(){
	double x1, y1, x2, y2, x3, y3, a, b, c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a = length_side(x3, x2, y3, y2); b = length_side(x1, x3, y1, y3); c = length_side(x2, x1, y2, y1);
	cout<<"Угол A = "<<search_coner(b, c, a)<<endl<<"Угол B = "<<search_coner(a, c, b)<<endl<<"Угол C = "<<search_coner(a, b, c)<<endl;
}
