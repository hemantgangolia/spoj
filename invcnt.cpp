#include<iostream>
#include<vector>
using namespace std;
#define lli long long int 

lli merge(std::vector<int> &v, int a, int b, int c, int d){
	std::vector<int> temp(d-a+1);
	int i = a, j = c, k = 0;
	lli count = 0;
	while(i <= b && j <= d){
		if(v[i] <= v[j]){
			temp[k] = v[i];
		}
		else {
			temp[k] = v[j];
			count += b-i;
		}
	}
	while(i<=b){
		temp[k] = v[i];
	}
	while(j<=d){
		temp[k] = v[j];
	}
	for(i = 0; i < d-a+1; i++){
		v[i+a] = temp[i];
	}
	return count;
}


lli mergeSort(std::vector<int> &v, int l, int r){
	if(l >= r)return 0;

	lli res = 0;

	int mid = (r-l)/2 + l;
	res += mergeSort(v, l, mid);
	res += mergeSort(v, mid+1, r);
	res += merge(v, l, mid, mid+1, r);
	return res;
}

int main(){	

	int t, n;
	cin >> t;
	
	while(t--){
		cin >> n;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++)cin >> v[i];

		cout << mergeSort(v, 0, n-1) << endl;
	}
	
	return 0;
}