#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
	cout<<"a = "<<y*pow(tan(pow(x, 2)), 3)+sqrt(pow(z, 2)/(pow(y, 2)+pow(x, 2)))<<endl<<"b = "<<log(y+x)+pow(sin(z/y), 2)<<endl;
}
