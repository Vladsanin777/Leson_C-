#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -1, end = 2, step = 0.2;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0 ? 0 : (0<=start && start<=1 ? pow(start, 2)-start : pow(start, 2)-sin(M_PI)*pow(start, 2)))<<endl;
	}
}
