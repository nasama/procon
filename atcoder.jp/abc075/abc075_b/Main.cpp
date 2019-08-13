#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<char> > data(H, vector<char>(W));
	vector<string> vec(H);

	for (int i = 0; i < H; i++) {
		cin >> vec.at(i);
  	}

  	for (int i = 0; i < H; i++) {
    	for (int j = 0; j < W; j++) {
      		data.at(i).at(j) = vec.at(i).at(j);
    	}
  	}

  	for (int i = 0; i < H; i++) {
    	for (int j = 0; j < W; j++) {
    		int answer = 0;
    		if(data.at(i).at(j)=='.'){
	    		if(j > 0){
	    			if(data.at(i).at(j-1)=='#'){
	    				answer++;
	    			}
	    			if(i > 0){
	    				if(data.at(i-1).at(j-1)=='#'){
	    					answer++;
	    				}
	    			}
	    			if(i < H-1){
	    				if(data.at(i+1).at(j-1)=='#'){
	    					answer++;
	    				}
	    			}
				}

				if(j < W-1){
	    			if(data.at(i).at(j+1)=='#'){
	    				answer++;
	    			}
	    			if(i > 0){
	    				if(data.at(i-1).at(j+1)=='#'){
	    					answer++;
	    				}
	    			}
	    			if(i < H-1){
	    				if(data.at(i+1).at(j+1)=='#'){
	    					answer++;
	    				}
	    			}				
				}	
	    		if(i > 0){
	    			if(data.at(i-1).at(j)=='#'){
	    				answer++;
	    			}
	    			
	    		}
	    		
	    		if(i < H-1){
	    			if(data.at(i+1).at(j)=='#'){
	    				answer++;
	    			}
	    		}	
	      		cout << answer;
	    	}
	    	else{
	    		cout << '#';
	  		}

	    }
	    cout << endl;
	}
}