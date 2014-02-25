#include<iostream>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	while(n != 0){
		cin >> s;
		int height = s.length()/n;
		for(int i = 0; i < n; i++){
			int val = i;
			cout << s[val];
			for(int j = 1; j < height; j++){
				if(j%2)val = val + 2*(n-i) - 1;
				else val = val + 2*i + 1;
				cout << s[val];
			}
		}
		cout << endl;
		cin >> n;
	}
}