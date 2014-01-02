#include<iostream>
#include<cmath>
using namespace std;

#define lli long long int

int main(){
	lli t, n;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> n;
		lli temp = sqrt(n);
		if(temp*temp == n){
			cout << "Case " << i << ": Yes\n";
		}
		else cout << "Case " << i << ": No\n";
	}
	return 0;
}