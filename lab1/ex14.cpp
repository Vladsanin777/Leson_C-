#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Intel Xeon E5-2690 v3\n2.6GHz\t3.5GHz(Turboboost)\nL1 64KB\tL2 256KB\tL3 30MB\n64-bit\n12 cores\t24 streams\nLGA2011-v3 soket\nHaswell\nTDP 135W\n40 line PCI-Express\nDDR4\tX8 128GB\tECC\t2.6GHz\n22nm"<<endl;
	cout<<info.str();
}
