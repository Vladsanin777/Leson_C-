#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) { result *= (5>k ? pow(k, 2)+1 : (k>8 ? k-2.1 : sin(k)) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
