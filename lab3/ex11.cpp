#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double r, h;
	cin>>r>>h;
	cout<<"Плотность вещества из которого изготовлен шар = "<<pow((r-h)/r, 3)<<endl;
}
