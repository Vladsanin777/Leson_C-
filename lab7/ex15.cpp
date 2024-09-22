#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) { result += (5>k ? k*sqrt(k-2.5) : (k>10 ? pow(M_E, k)*cos(2.5)*k : k*sin(2.5)*k) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
