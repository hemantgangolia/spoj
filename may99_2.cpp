#include<iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	string manku = "manku";
	while(t--){
		cin >> n;
		string res = "";
		while(n > 0){
			n -= 1;
			res = manku[n%5] + res;
			n /= 5;	
		}
		cout << res << endl;
	}
	return 0;
}
