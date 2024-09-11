#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.5, end = 2, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start>1 ? log10(start+1) : pow(sin(sqrt(20.3*start)), 2))<<endl;
	}
}
