#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -1, end = 1, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0.1 ? sqrt(2.5*pow(start, 2)+0.4*sin(start)+1) : (0.1 == start ? 2.5*start+0.4 : sqrt(2.5*pow(start, 2)*0.4*cos(start)+1)))<<endl;
	}
}
