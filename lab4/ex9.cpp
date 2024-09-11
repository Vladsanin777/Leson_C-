#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -2, end = 3, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<-1 ? -1/pow(start, 2) : (-1<=start && start<=2 ? pow(start, 2) : 4))<<endl;
	}
}
