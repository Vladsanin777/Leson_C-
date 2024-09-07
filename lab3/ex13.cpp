#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double R, H;
	cin>>R>>H;
	cout<<"Площадь полной поверхности конуса = "<<M_PI*R*(R+sqrt(pow(R, 2)+pow(H, 2)))<<endl;
}
