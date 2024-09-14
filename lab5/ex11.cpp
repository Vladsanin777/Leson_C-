#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(y >= -pow(x, 2) - 2 && y <= pow(x, 2) - 2)<<endl;
}
