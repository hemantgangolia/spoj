#include<iostream>
#include<vector>
using namespace std;

#define lli long long int

int main(){
	int n;
	cin >> n;
	while(n!=-1){
		vector<int> vec(n);
		lli sum = 0, avg = 0;
		for(int i = 0; i < n; i++){
			cin >> vec[i];
			sum += vec[i];
			if(sum%n==0){
				avg+=sum/n;
				sum = 0;
			}
		}
		if(sum!=0)cout << "-1" << endl;
		else {
			int res = 0;
			for(int i = 0; i < n; i++){
				if(vec[i] > avg)res += vec[i] - avg;
			}
			cout << res << endl;
		}

		cin >> n;
	}
}