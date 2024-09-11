#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 1, end = 10, step = 1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(sin((pow(start, 2)+1)/10)>0 ? 0.3*sin((pow(start, 2)+1)/10) : cos(start+1/10))<<endl;
	}
}
