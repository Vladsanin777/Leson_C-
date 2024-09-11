#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	double u, v, x, y, z;
	cin>>u>>v>>x>>y>>z;
	cout<<"Самое маленькое число: "<<min({u, v, x, y, z})<<endl;
}
