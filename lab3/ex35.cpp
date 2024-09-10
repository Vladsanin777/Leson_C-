#include <iostream>
#include <cmath>

using namespace std;
//Подсчёт верхней и низней пирамиды
double top_and_bottom_surface(double x){return 3*sqrt(3)/2*pow(x, 2);}

int main(){
	double x, y, h;
	cin>>x>>y>>h;
	cout<<"Полная площадь усечённой пирамиды = "<<top_and_bottom_surface(x)+top_and_bottom_surface(y)+3*(x+y)*sqrt(pow(h, 2)+pow((y-x)/2, 2))<<endl;
}
