#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long double a, current_element, sum_elements = 0;
	long m, n;
	cin>>a>>m;
	for (n = 1; n != m; ++n) {
		cout<<(current_element = pow(a, n))<<endl;
		sum_elements += current_element;
	}
	cout<<"Cумма: "<<sum_elements<<endl;
}
