#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) {long double sqrt_k = sqrt(k); result += (2>sqrt_k ? M_PI*pow(k, 2)-7/pow(k, 2) : (sqrt_k>5 ? log(k+7*sqrt(k+1.65)) : 1.5*pow(k, 3)+7*sqrt(k) ));} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
