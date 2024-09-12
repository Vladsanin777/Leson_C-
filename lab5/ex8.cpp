#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, a;
	cin>>x>>y;
	a = sqrt(2)/2;
	cout<<(pow(x, 2)+pow(y, 2)<1&&(((x>a||x<-a)&&(y<a||y>-a))||((y>a||y<-a)&&(x<a||x>-a))))<<endl;
}
