#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Statue of Liberty\tNew York\tNew York Bay"<<endl;
	cout<<info.str();
}
