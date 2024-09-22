#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) { result += (5<k && 8>k ? 2.5* /*x*/ k+0.4 : sqrt(2.5*pow(k, 2)+0.4*( 5>k ? sin(k) : cos(k) )+1) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
