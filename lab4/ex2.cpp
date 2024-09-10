#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 3, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<1 ? 1 : (1<=start && start<=2 ? -0.5*pow(start, 2)*log(start) : pow(M_E, start)*cos(2)*start))<<endl;
	}
}
