#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = sqrt(2); for (long n_result = 1; n_result <= n; ++n_result) {result = sqrt(2+result);}; return result;}

int main(){
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
