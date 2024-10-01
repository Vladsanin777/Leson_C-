#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Численные методы\t Операционные системы и среды\t Операционные системы и среды\n8:45AM\t10:25AM\t12:25PM"<<endl;
	cout<<info.str();
}
