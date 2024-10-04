#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return log(x+1)/log10(sqrt(x)+1);}

int main(){
	cout<<fixed<<setprecision(3)<<f(5)-f(2)<<endl;
}
