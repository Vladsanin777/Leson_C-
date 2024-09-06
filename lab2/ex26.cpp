#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<y+(x/(pow(y, 2)+abs(pow(x, 2)/(y+(pow(x, 3)/3)))))<<endl<<"b = "<<1+pow(tan(z/2), 2)<<endl;
}
