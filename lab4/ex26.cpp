#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 1, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(pow(start, 2)>=sin(start) ? sqrt(pow(start, 2)-sin(start)) : sqrt(pow(start, 2)+sin(start)))<<endl;
	}
}
