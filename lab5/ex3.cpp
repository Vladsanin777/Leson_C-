#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	cin>>x>>y;
	cout<<(((x<0&&y<0&&x>-1&&y>-1)||(x>0&&y>0&&x<1&&y<1))&&pow(x, 2)+pow(y, 2)>1)<<endl;
}
