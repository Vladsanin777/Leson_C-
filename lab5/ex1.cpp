#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, ds;
	cin>>x>>y;
	ds = pow(x, 2)+pow(y, 2);
	cout<<(ds>1&&ds<4)<<endl;
}
