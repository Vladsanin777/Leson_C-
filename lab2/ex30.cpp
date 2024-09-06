#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(x/(y-pow(z, 2)+(pow(x, 2)-pow(y+2, 2))/4-4*pow(z, 2)) * (pow(x, 2)+x-1) / (pow(y, 3)-3*pow(z, 2)))<<endl<<"b = "<<log(cos(x)*y+sin(x)*z)<<endl;
}
