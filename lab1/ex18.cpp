#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"IMICE\n102\tbuttons\nmembrans"<<endl;
	cout<<info.str();
}
