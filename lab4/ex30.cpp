#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	double u, v, x, y, z;
	cin>>u>>v>>x>>y>>z;
    vector<double> numbers = {u, v, x, y, z};
    sort(numbers.begin(), numbers.end(), greater<double>());
    cout << "Числа в порядке убывания: ";
    for (double num : numbers) { cout << num << " "; }
    cout<<endl;
}
