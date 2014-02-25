#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;

	while(n--){
		cin >> s;
		stack<char> stk;
		// cout << s.length() << endl;
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				cout << s[i];
			}
			else if (s[i] == '('){

			}
			else if (s[i] == ')'){
				cout << stk.top();
				stk.pop();
			}
			else {
				stk.push(s[i]);
			}
		}
		cout << endl;
	}
	return 0;
}