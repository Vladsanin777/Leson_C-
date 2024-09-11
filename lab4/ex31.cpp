#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	double x, y, z;
	cin>>x>>y>>z;
    cout<<"Max число: "<<max({x, y, z})<<endl;
}
