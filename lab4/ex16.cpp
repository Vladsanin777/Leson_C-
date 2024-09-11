#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.25, end = 2, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0.5 ? 2*pow(start, 2)+3*start-7 : (0.5==start ? pow(start, 3) : sqrt(2*pow(start, 2)+3*start-7)))<<endl;
	}
}
