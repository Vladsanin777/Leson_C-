#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) { result += (sin((pow(k, 2)+1)/10)>0 ? 0.3*sin((pow(k, 2)+1)/10) : cos(k+1/10) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
