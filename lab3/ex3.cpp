#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double R1, R2, R3;
	cin>>R1>>R2>>R3;
	cout<<"Общее сопротивление = "<<1/(1/R1+1/R2+1/R3)<<endl;
}
