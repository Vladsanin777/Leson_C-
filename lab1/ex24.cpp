#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"USA\tVashincton\nRussia\tMoscov\nGermani\tBerlin\nIspani\tMadrid"<<endl;
	cout<<info.str();
}
