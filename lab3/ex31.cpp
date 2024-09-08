#include <iostream>
#include <cmath>

using namespace std;

double part_matr(double a11, double a22, double a33, double a23, double a32){return a11*(a22*a33-a23*a32);}

int main(){
	double a11, a12, a13, a21, a22, a23, a31, a32, a33;
	cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;
	cout<<"Трёх уровневая матрица = "<<part_matr(a11, a22, a33, a23, a32)-part_matr(a12, a21, a33, a23, a31)+part_matr(a13, a21, a32, a22, a31)<<endl;
}
