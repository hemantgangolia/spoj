#include<iostream>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int res = 0, temp = 5;
		while(temp < 1000000000 && n >= temp){
			res += n/temp;
			temp *= 5;	
		}
		cout << res << endl;
	}
	return 0;
}
