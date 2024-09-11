#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.8, end = 2, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start>1 ? 0.9*log10(start)+sqrt(start) : 1.8*cos(start)+3*pow(start, 2))<<endl;
	}
}
