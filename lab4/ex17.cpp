#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = -3, end = 7, step = 1;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<0 ? pow(start, 2)-0.8 : (0<=start&&start<1 ? 0 : pow(start, 2)+start))<<endl;
	}
}
