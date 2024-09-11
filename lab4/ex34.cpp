#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string calculate(double a, char operation, double b){
	switch(operation){
		case '+': return to_string(a+b);
		case '-': return to_string(a-b);
		case '*': return to_string(a*b);
		case '^': return to_string(pow(a, b));
		case '/':
		case ':': return (b==0 ? "Деление на ноль!" : to_string(a/b));
		default: return "Неверная операция";
	}
}

int main(){
	double a, b;
	char operation;
	cin>>a>>operation>>b;
	cout<<"Ответ: "<<calculate(a, operation, b)<<endl;
}
