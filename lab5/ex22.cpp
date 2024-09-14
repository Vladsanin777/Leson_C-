#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(sqrt(2)/2<=pow(x, 2)+pow(y, 2)&&x<=-y+1&&x>=y-1&&x>=-y-1&&x<=y+1)<<endl;
}
