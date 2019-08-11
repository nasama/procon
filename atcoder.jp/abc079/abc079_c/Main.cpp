#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, B, C, D, N;
	cin >> N;
	D = N%10;
	C = N/10%10;
	B = N/100%10;
	A = N/1000;
	while(1){
		if(A+B+C+D==7){
			cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
			break;
		}
		else if(A+B+C-D==7){
			cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
			break;
		}
		else if(A+B-C+D==7){
			cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
			break;		
		}
		else if(A+B-C-D==7){
			cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
			break;		
		}
		else if(A-B+C+D==7){
			cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
			break;		
		}
		else if(A-B+C-D==7){
			cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
			break;			
		}
		else if(A-B-C+D==7){
			cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
			break;			
		}
		else if(A-B-C-D==7){
			cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;
			break;			
		}
	}
}