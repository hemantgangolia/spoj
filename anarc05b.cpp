#include<iostream>
using namespace std;

int binary_search(int * a, int l, int r, int val){
	while(l <= r){
		int m = l + (r-l)/2;
		if(a[m] == val){
			return m;
		}
		else if (a[m] < val){
			r = m-1;
		}
		else {
			l = m+1;
		}
	}
	return -1;
}

int main(){

	int a[10000], b[10000];

	int a_len, b_len;

	cin >> a_len;
	while(a_len != 0){
		for(int i = 0; i < a_len; i++){
			cin >> a[i];
		}
		cin >> b_len;
		for(int i = 0; i < b_len; i++){
			cin >> b[i];
		}

		int a_i = 0, b_i = 0;
		long long int res = 0, max1 = 0, max2 = 0;
		while(a_i < a_len && b_i < b_len){
			if(a[a_i] == b[b_i]){
				res += a[a_i];
				if(max1 < max2)res+=max2;
				else res+=max1;
				max1 = max2 = 0;
				a_i++;
				b_i++;
			}
			else if (a[a_i] < b[b_i]){
				max1 += a[a_i++];
			}
			else {
				max2 += b[b_i++];
			}
		}

		while(a_i < a_len){
			max1+=a[a_i++];
		}
		while(b_i < b_len){
			max2+=b[b_i++];
		}

		if(max1 < max2)res+=max2;
		else res+=max1;

		cout << res << endl;
		cin >> a_len;
	}
	return 0;
}