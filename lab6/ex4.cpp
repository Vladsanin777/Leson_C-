#include <iostream>
#include <cmath>
using namespace std;

long double formula(double a, long n) {long double result = 1/a, part_result = a; for (long n_result = 1; n_result <= n; ++n_result) {part_result *= a+n_result; result += 1/part_result;}; return result;}

int main(){
	double a;
	long n;
	cin>>a>>n;
	cout<<"Ответ: "<<formula(a, n)<<endl;
}
