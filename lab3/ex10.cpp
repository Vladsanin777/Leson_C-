#include <iostream>
#include <cmath>

using namespace std;

double R;

double S_and_V(short a, short b){return 4/a*M_PI*pow(R, b);}

int main(){
	cin>>R;
	cout<<"Площадь поверхности земного шара = "<<S_and_V(1, 2)<<endl<<"Объём земного шара = "<<S_and_V(3, 3)<<endl;
}
