#include<stdio.h>
#include<map>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	map<long long int, int> mymap;
	int count = 0, distinct = 0;
	while(n--){
		char * s = new char[10];
		long long int v;
		scanf("%s %lld", s, &v);

		if(s[0] == 'i'){
			if(mymap.find(v) == mymap.end() || mymap[v] == 0){
				mymap[v]= 1;
				distinct++;
			}
			else {
				if(mymap[v] == 1)count++;
				mymap[v]++;
			}
		}
		else {	// delete
			if(mymap.find(v) != mymap.end() && mymap[v] != 0){
				if(mymap[v] == 1)distinct--;
				mymap[v]--;
				if (mymap[v] == 1)count--;
			}
		}

		// printf("%c number %lld with distinct %d and  count %d\n", s[0], v, distinct, count );

		int homo = 0, hetero = 0;
		if(distinct >= 2)hetero++;
		if(count > 0)homo++;

		if(homo > 0 && hetero>0)printf("both\n");
		else if (homo>0)printf("homo\n");
		else if (hetero>0)printf("hetero\n");
		else printf("neither\n");
	}
	return 0;
}