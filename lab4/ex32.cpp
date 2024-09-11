#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
    cout<<(x+y>z&&x+z>y&&y+z>x ? (pow(x, 2)+pow(y, 2)>pow(z, 2)&&pow(x, 2)+pow(z, 2)>pow(y, 2)&&pow(y, 2)+pow(z, 2)>pow(x, 2) ? "Да, эти стороны образуют остроугольный треугольник!" : "Да, эти стороны образуют треугольник но он не является остроугольным!" ) : "Эти длины сторон не образуют треугольник!")<<endl;
}
