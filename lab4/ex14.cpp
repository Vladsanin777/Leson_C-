#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -1, end = 3, step = 0.5;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0 ? pow(tan(start), 2) : pow(sin(start), 2))<<endl;
	}
}
