#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, P_half, S2;
	cin>>a>>b>>c;
	P_half = (a+b+c)/2;
	S2 = sqrt(P_half*(P_half-a)*(P_half-b)*(P_half-c))*2;
	cout<<"Высота A = "<<S2/a<<endl<<"Высота B = "<<S2/b<<endl<<"Высота C = "<<S2/c<<endl;
}
