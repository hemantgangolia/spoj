#include<iostream>
using namespace std;

#define lli long long int

int main(){
	lli t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		lli sum = 0;
		for(lli i = 1; i <= n; i++){
			cin >> x;
			sum = (sum+x)%n;
		}
		if(sum == 0)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}