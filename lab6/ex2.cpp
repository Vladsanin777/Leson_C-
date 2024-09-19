#include <iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(long n) {unsigned long long result = 1; for (long n_result = 2; n_result <= n; ++n_result) {result *= n_result;}; return result;}

int main(){
	long n;
	cin>>n;
	cout<<"Ответ: "<<1.0/factorial(n)<<endl;
}
