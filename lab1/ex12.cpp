#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Saratov\tSokolovaay\t386"<<endl;
	cout<<info.str();
}
