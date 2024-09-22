#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) { result += (12>k ? 1.5*pow(cos(k), 2) : (k>18 ? 3*tan(k) : pow(k-2, 2)+6) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
