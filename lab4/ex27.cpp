#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -1, end = 2, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start>1 ? sqrt(1-pow(cos(start), 2)) : 1+pow(sin(start), 2))<<endl;
	}
}
