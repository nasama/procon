#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, max = 0;
	cin >> N;
	vector<vector<int> > data(2, vector<int>(N));

  	for (int i = 0; i < 2; i++) {
    	for (int j = 0; j < N; j++) {
      		cin >> data.at(i).at(j);
    	}
  	}

  	for (int i = 0; i < N; i++) {
  		int total = 0; 
  		for(int j = 0; j < i+1; j++){
  			total += data.at(0).at(j);
  		}
  		for(int j = i; j < N; j++){
  			total += data.at(1).at(j);
  		}
  		if(max < total) max = total;
  	}
  	cout << max << endl;
}