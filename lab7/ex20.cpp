#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) { result += (k>5 ? 2*pow(k, 2)+3*k-7 : (k>8 ? sqrt(2*pow(k, 2)+3*k-7) : pow(k, 3)) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
