#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return (double long)x/(pow(x, 4)+3*pow(x, 2)+2);}

int main(){
	cout<<fixed<<setprecision(4.2)<<f(2)-f(1)<<endl;
}
