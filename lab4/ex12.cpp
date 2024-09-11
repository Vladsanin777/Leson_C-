#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.1, end = 1, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(1.5*start<1 ? 1.5*start-log10(1.5)*start : (1==start*1.5 ? 1 : 1.5*start+log10(1.5)*start))<<endl;
	}
}
