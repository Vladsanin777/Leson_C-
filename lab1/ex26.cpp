#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"NewYork\tManhattan"<<endl;
	cout<<info.str();
}
