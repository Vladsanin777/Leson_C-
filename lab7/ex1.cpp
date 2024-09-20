#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k =1; N > k; ++k) {result += (16<k ? pow(M_E, sqrt(k)) : log(pow(k, 2)+5));} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
