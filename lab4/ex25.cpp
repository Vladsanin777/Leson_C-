#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.1, end = 1.3, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(1.3*start<1 ? 1.3*start+1.29 : (1 == 1.3*start ? cos(1.3)*start : pow(M_E, 1.3*start)*cos(1.3)*start))<<endl;
	}
}
