#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"Sanin\tVladislav\tVladimirovich\nSanina\tOlga\t\tIvanovna\nKotov\tVladimir\tUrevich"<<endl;
	cout<<info.str();
}
