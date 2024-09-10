#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -0.5, end = 2, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0 ? pow(start, 2)+1 : (0<=start && start<=M_PI/2 ? sin(start) : start-2.1))<<endl;
	}
}
