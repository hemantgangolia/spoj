#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	while(n!=0 || k!=0){
		int r;
		r = 0;
	    	int i = 1;
	        while (i <= n){
		      r = (r + k) % i;
	      	      i+= 1;
	      	}
	      	cout << n << " " << k << " " << r+1 << endl;
	      	cin >> n >> k;
	}
	return 0;
}