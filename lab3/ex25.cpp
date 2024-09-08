#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b;
	cin>>a>>b;
	cout<<"Объём правильной шести угольной пирамиды = "<<sqrt(3)/2*pow(a, 2)*sqrt(pow(b, 2)-3*pow(a, 2)/4)<<endl;
}
