#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(y>=2*pow(x, 3)&&x>=pow(y, 2))<<endl;
}
