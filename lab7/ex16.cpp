#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, kxk; for (long k = 1; N > k; k++) { kxk = pow(k, 2); result *= (25>kxk ? kxk-1 : sqrt(kxk-1) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
