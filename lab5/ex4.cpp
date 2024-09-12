#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, ds;
	cin>>x>>y;
	ds = pow(x, 2)+pow(y, 2);
	cout<<(ds<1||(((x>1||x<-1)||(y>1||y<-1))&&ds<2))<<endl;
}
