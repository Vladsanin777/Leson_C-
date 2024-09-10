#include <iostream>
#include <cmath>

using namespace std;

double part_matr(double a1, double b2, double a2, double b1){return a1*b2-a2*b1;}

int main(){
	double a1, a2, b1, b2, c1, c2, D;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	D = part_matr(a1, b2, a2, b1);
	cout<<"X = "<<part_matr(c1, b2, c2, b1)/D<<endl<<"Y = "<<part_matr(a1, c2, a2, c1)/D<<endl;
}
