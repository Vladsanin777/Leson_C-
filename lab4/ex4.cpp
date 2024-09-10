#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 3, step = 0.2;
	for (start; start<=end; start += step){
		double t = pow(start, 2)+4*start+5;
		cout<<"x = "<<start<<endl<<"y = "<<(start<=2 ? t : 1/t)<<endl;
	}
}
