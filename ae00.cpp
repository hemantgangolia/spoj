#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int res = 0;
	int count = 0;
	int i = 1, temp;
	while(i <= n){
		if(n%i == 0){
			temp = n/i;
			if(temp - count > 0){
				res = res + temp-count;
			}
			count++;
		}
		i++;
	}
	cout << res;
	return 0;
}