#include<iostream>
#include<vector>
using namespace std;

int main(){
	string n;
	cin>>n;
	while(n[0]!='0'){
		int len = n.length();
		vector<int> vec(len,0);
		vec[0] = 1;
		int i = 1;
		if(len > 1){
			for(; i < len; i++){
				if(n[i] == '0'){
					if(i == 1)vec[i] = 1;
					else vec[i] = vec[i-2];
				}
				else {
					int temp = 10*(n[i-1]-'0') + (n[i]-'0');
					if(i==1 && temp <= 26)vec[i] = vec[i-1]+1;
					else if(temp > 9 && temp <= 26) vec[i] = vec[i-1] + vec[i-2];
					else vec[i] = vec[i-1];
				}
			}
		}
		cout << vec[i-1] << endl;
		cin >>n;
	}
	return 0;
}