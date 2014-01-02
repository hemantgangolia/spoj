#include<iostream>
using namespace std;

int main(){
	int t, m, n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		int * primes = new int [n-m+1];
		for(int i = 0; i < n-m+1; i++){
			primes[i] = 0;
		}

		for(int p = 2; p*p <= n; p++){
			int first = m/p;
			first = first*p;
			for(int j = first; j <= n; j+=p){
				if(j!=p && j >= m){
					primes[j-m] = 1;
				}
			}
		}

		for(int i = 0; i < n-m+1; i++){
			if(primes[i] == 0 && m+i != 1){
				cout << m+i << endl;
			}
		}

		delete primes;
		cout << endl;
	}
	return 0;
}