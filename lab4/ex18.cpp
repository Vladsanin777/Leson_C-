#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0, end = 7, step = 0.5;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<2.8 ? (2.6-0.39)/(pow(M_E, start)+cos(start)) : (2.8<=start&&start<6 ? 7/(start+1) : pow(M_E, start)+sin(start)))<<endl;
	}
}
