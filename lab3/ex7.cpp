#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double phi, hours_x_60; int hours;
	cin>>phi;
	hours_x_60 = 360*phi/M_PI;
	hours = static_cast<int>(hours_x_60 / 60);
	cout<<"Часов: "<<hours<<endl<<"Минут: "<<static_cast<int>(hours_x_60-60*hours)<<endl;
}
