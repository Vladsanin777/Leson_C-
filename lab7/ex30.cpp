#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) { result *= ( k>5 ? sqrt(1-pow(cos(k), 2)) : 1+pow(sin(k), 2) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
