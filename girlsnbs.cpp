#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int a, b, min, max;
	cin >> a >> b;
	while(a!=-1 || b!=-1){	
		min = (a<b)?a:b;
		max = a+b-min;

		if(min==0){
			cout << max << endl;
		}
		else {
			cout << ceil((float)max/(min+1)) << endl;
		}
		cin >> a >> b;

	}
	return 0;
}