#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(y>=pow(x, 2)&&(y<=-x||y<=x))<<endl;
}
