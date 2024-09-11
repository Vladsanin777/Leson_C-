#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 1, end = 5, step = 0.5;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<2.5 ? start*sqrt(start-2.5) : (2.5==start ? start*sin(2.5)*start : pow(M_PI, start)*cos(2.5)*start))<<endl;
	}
}
