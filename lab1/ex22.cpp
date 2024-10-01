#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Yri\t\tGagarin\t\tVOSTOK_1\nTatiayna\tTerishkova\tVOSTOK_2"<<endl;
	cout<<info.str();
}
