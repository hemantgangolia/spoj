#include<iostream>
using namespace std;

int reverse(int n){
	int res = 0;
	while(n > 0){
		res = res*10 + n%10;
		n /= 10;		
	}
	return res;
}

int main(){
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		cout << reverse(reverse(a)+reverse(b)) << endl;
	}
	return 0;
}
