#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double start = 0.2, end = 2.8, step = 0.2;
	for (start; start<=end; start += step){
		cout<<"x = "<<start<<endl<<"y = "<<(start<=1 ? 1.5*pow(cos(start), 2) : (start>=1 && 2>=start ? pow(start-2, 2)+6 : 3*tan(start)))<<endl;
	}
}
