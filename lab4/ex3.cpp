#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 3, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<1.3 ? M_PI*pow(start, 2)-7.0/pow(start, 2) : (1==1.3 ? 15*pow(start, 3)*7*sqrt(start) : log10(start+7*sqrt(start))))<<endl;
	}
}
