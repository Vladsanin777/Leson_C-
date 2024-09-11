#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -2, end = 3, step = 0.5, t;
	for (start; start<=end; start += step){
		t = pow(start, 2)-1;
		cout<<"x = "<<start<<endl<<"y = "<<(start<=1 ? t : sqrt(t))<<endl;
	}
}
