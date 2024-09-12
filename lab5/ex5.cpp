#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(pow(x, 2)+pow(y, 2)<1&&(x<=0&&y<=0||x>=0&&y>=0))<<endl;
}
