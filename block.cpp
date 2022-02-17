#include <iostream>
#include <string>
using namespace std;

int main () {
	int numRow;
	int numCol;
	while(numRow != 0 || numRow != 0){
		cout << "Enter number of rows and columns:" << endl;
		cin >> numRow;
		cin >> numCol;
		for(int i = 0; i < numRow; i++){
			for(int j = 0; j < numCol; j++){
				cout << "X.";
			}
			cout << endl;
		}
	}
	return 0;
}
