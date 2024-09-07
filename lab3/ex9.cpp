#include <iostream>
#include <cmath>

using namespace std;

double R;

double side_of_a_triangle(double a){return 2*R*sin(a*M_PI/180);}

int main(){
	double a, b, c;
	cin>>a>>b>>c>>R;
	cout<<"Сторона A = "<<side_of_a_triangle(a)<<endl<<"Сторона B = "<<side_of_a_triangle(b)<<endl<<"Сторона C = "<<side_of_a_triangle(c)<<endl;
}
