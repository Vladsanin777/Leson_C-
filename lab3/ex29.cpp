#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double R1, R2, L;
	cin>>R1>>R2>>L;
	cout<<"Объём усечёного конуса = "<<(pow(R1, 2)+R1*R2+pow(R2, 2))*M_PI*sqrt(pow(L, 2)-pow(R1-R2, 2))/3<<endl;
}
