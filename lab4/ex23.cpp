#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -1, end = 1, step = 0.1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0 ? pow(sin(start), 2) : (0==start ? 0 : pow(cos(start), 2)+sin(start)))<<endl;
	}
}
