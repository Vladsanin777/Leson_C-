#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = sqrt(3*n); for (long n_result = n; n_result > 0; --n_result) {result = sqrt(3*n_result+result);}; return result;}

int main(){
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
