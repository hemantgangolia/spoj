#include<iostream>
using namespace std;

int main(){
	int t, x, y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(x==y){
			if(x%2){
				cout << 2*x-1 << endl;
			}
			else {
				cout << 2*x << endl;
			}
		}
		else if(x==y+2){
			if(x%2){
				cout << 2*x-3 << endl;
			}
			else {
				cout << 2*x-2 << endl;
			}
		}
		else cout << "No Number\n";
	}
	return 0;
}