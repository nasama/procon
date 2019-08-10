#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <unordered_map>
using namespace std;

int main() {
	int N;
	unordered_map<string, int> mp;  
	long long answer=0;
	cin>>N;
 
  	vector<string> A;
 
  	for (int i = 0; i < N; i++) {
      		string s;
      		cin >> s;
      		sort(s.begin(), s.end());
      		A.push_back(s);
    }

    for (int i = 0; i < N; i++) {
      	if(mp[A.at(i)]>=1) {
      		answer+=mp[A.at(i)];
      		mp[A.at(i)]++;
      	}
      	else mp[A.at(i)] = 1;
    }
    cout<<answer<<endl;
}