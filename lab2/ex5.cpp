#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления факториала итеративно
double factorial(int n) { double result = 1; for (int i = 2; i <= n; ++i) result *= i; return result;}

int main(){
	double x, y;
	cin>>x>>y;
	cout<<"a = "<<1 + x + (pow(x, 2) / factorial(2)) + (pow(x, 3) / factorial(3)) + (pow(x, 4) / factorial(4))<<endl<<"b = "<<x * (sin(pow(x, 3)) + cos(pow(y, 2)))<<endl;
}
