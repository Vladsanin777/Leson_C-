#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -2, end = 1, step = 0.2;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start>0 ? sin(start)-start : sin(start)-pow(start, 2))<<endl;
	}
}
