#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(0.5*pow(x, 3)<=y<=3*x)<<endl;
}
