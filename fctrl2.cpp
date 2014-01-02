#include<iostream>
using namespace std;

#define SIZE 200

int main(){
	int t, n, index;
	cin >> t;
	int a[SIZE];
	while(t--){
		cin >> n;
		a[0] = 1;
		index = 0;
		for(; n >= 2; n--){		
			int temp = 0;
			for(int i = 0; i <= index; i++){
				temp = temp + a[i]*n;
				a[i] = temp%10;
				temp = temp/10;
			}
			while(temp > 0){
				a[++index] = temp%10;
				temp = temp/10;
			}
		}

		for(int i = index; i >= 0; i--){
			cout<<a[i];
		}
		cout << endl;
	}
	return 0;
}