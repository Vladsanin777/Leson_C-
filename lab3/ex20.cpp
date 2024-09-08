#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double R1, R2, H;
	cin>>R1>>R2>>H;
	cout<<"Объём усечёного конуса = "<<1.0/3*M_PI*H*(pow(R1, 2)+R1*R2+pow(R2, 2))/100<<endl;
}
