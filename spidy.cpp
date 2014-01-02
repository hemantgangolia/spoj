#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class state{
	public:
		int pos, building, steps;
		state(int p, int b, int s){
			pos = p; building = b; steps = s;
		}
		state(){}
};

int main(){
	int t;
	cin >> t;
	while(t--){
		int h, k;
		cin >> h >> k;
		char build[2][100001] = {0};
		int visited[2][100001] = {0};
		for (int i = 0; i < h; ++i)
		{
			cin>>build[0][i];
		}
		for (int i = 0; i < h; ++i)
		{
			cin>>build[1][i];
		}

		queue<state> q;
		q.push(state(0,0,0));
		state temp;
		int flag = 0;
		while(!q.empty()){
			temp = q.front(); q.pop();

			if(build[temp.building][temp.pos] == 'X' || visited[temp.building][temp.pos] == 1)continue;

			if(temp.pos >= h-1)break;
			if(temp.steps > temp.pos){
				flag = 1;
				break;
			}

			visited[temp.building][temp.pos] = 1;

			q.push(state(temp.pos+1,temp.building, temp.steps+1));
			if(temp.pos>0)q.push(state(temp.pos-1,temp.building, temp.steps+1));
			q.push(state(temp.pos+k,(temp.building+1)%2,temp.steps+1));

		}
		if(flag == 0)cout << temp.steps << endl;
		else cout << "NO\n";
	}
	return 0;
}