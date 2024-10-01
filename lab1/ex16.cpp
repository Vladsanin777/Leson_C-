#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"SSD\n\tMVME M2\n\tPCIe-Gen3\n\tKOOTION\n\t1TB\n\t0.5GB/s\n\t800TB\nHDD\n\tWestonDigetol\n\t4TB\n\tSATA"<<endl;
	cout<<info.str();
}
