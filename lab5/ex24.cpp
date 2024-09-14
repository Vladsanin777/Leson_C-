#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(y>x&&pow(x, 2)+pow(y, 2)>1&&y<=1&&x>=-1)<<endl;
}
