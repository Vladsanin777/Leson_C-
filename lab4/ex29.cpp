#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<"z = "<<(x>y ? x-y : y-x+1)<<endl;
}
