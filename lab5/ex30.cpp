#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(y>=abs(x)&&pow(x, 2)+pow(y, 2)<=1)<<endl;
}
