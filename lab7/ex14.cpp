#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, kxk; for (long k = 1; N > k; k++) {kxk = pow(k, 2); result *= (10>kxk ? -1.0/kxk : (kxk>500 ? 4 : kxk) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
