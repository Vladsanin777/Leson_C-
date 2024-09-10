#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 1, end = 2, step = 0.05;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<=1.2 ? 2.8*pow(start, 2)-0.3*start+4 : (start==1.2 ? 2.8/start+sqrt(pow(start, 2)+1) : (2.8-0.3*start)/sqrt(pow(start, 2)+1)))<<endl;
	}
}
