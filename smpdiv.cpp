#include<iostream>
using namespace std;

int main(){
	int t, n, x, y;
	cin >> t;
	while(t--){
		cin >> n >> x >> y;
		int temp = x;
		while(temp < n){
			if(temp%y!=0)cout << temp << " ";
			temp += x; 
		}
		cout << endl;
	}
	return 0;
}


