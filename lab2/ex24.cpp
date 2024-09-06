#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<(3+pow(M_E, y-1))/(1+pow(x, 2)*abs(y-tan(z)))<<endl<<"b = "<<1+abs(y-x)+(pow(y-x, 2)/2)+(pow(abs(y-x), 3)/3)<<endl;
}
