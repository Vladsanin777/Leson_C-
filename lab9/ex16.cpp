#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 4*pow(x, 2)+x/2;}

int main(){
	cout<<fixed<<setprecision(5)<<f(1)-f(-1)<<endl;
}
