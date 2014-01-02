#include<iostream>
using namespace std;

int main(){
	int t, n;
	string s;
	cin >> t;
	while(t--){
		cin >> n >> s;
		vector<int> len(26,0);
		int last = 0;
		int prev = s[0]-'a';
		len[prev] = 1;
		for(int i = 1; i < n; i++){
			int now = s[i] - 'a';
			if(len[now] == 0){
				
			}
			else {

			}
		}
	}
	return 0;
}