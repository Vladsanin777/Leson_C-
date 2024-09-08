#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double R1, R2, H;
	cin>>R1>>R2>>H;
	cout<<"Площадь боковой поверхности усечённого конуса = "<<M_PI*(R1+R2)*sqrt(pow(H, 2)+pow(R1-R2, 2))<<endl;
}
