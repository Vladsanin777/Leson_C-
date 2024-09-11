#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.25, end = 2, step = 0.25;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0.5 ? (log(start)+pow(start, 2))/sqrt(start+2.2) : (0.5 == start ? sqrt(start+2.2)+1/start : cos(start)+2.2*pow(sin(start), 2)))<<endl;
	}
}
