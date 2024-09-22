#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = sqrt(k+10); result *= (arg_for_comparison<5 ? pow(k, 2)-0.8 : (arg_for_comparison>8 ? pow(k, 2)+k : 0) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
