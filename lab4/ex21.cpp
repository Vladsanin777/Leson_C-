#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 12, step = 1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<4 ? 2.1/start+1.8*start-20.5 : (4 <= start && start <= 6 ? start : 2.1*start+1.8*pow(start, 2)))<<endl;
	}
}
