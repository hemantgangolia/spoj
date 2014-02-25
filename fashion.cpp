#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<long long int> men(n);
		vector<long long int> women(n);
		
		for(int i = 0; i < n; i++)cin >> men[i];
		
		for(int i = 0; i < n; i++)cin >> women[i];

		sort(men.begin(), men.end());
		sort(women.begin(), women.end());

		long long int res = 0;
		for(int i = 0; i < n; i++){
			res += men[i] * women[i];
		}
		cout << res << endl;
	}
	return 0;
}