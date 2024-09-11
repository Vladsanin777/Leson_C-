#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.7, end = 2, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<1.4 ? M_PI*pow(start, 2)-7/pow(start, 2) : (1.4==start ? 1.5*pow(start, 3)+7*sqrt(start) : log(start+7*sqrt(start+1.65))))<<endl;
	}
}
