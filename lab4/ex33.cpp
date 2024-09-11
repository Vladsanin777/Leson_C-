#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	double a, b, c, D;
	cin>>a>>b>>c;
	D = pow(b, 2)-4*a*c;
    cout<<(D>0 ? "Уравнение имеет два различных действительных корня: x1 = " + to_string((-b+sqrt(D))/(2*a)) + ", x2 = " + to_string((-b-sqrt(D))/(2*a)): (D==0 ? "Уравнение имеет один действительный корень: x = " + to_string(-b/(2*a)) : "Уравнение имеет два комплексных корня: x1 = " + to_string(-b / (2 * a)) + " + " + to_string(sqrt(-D) / (2 * a)) + "i, x2 = " + to_string(-b / (2 * a)) + " - " + to_string(sqrt(-D) / (2 * a)) + "i"))<<endl;
}
