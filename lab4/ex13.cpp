#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.1, end = 1, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start>3.5 ? sin(start)*tan(start) : pow(cos(start), 2))<<endl;
	}
}
