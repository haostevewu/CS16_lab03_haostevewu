#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	double result;
	while(n != -1){
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
		if(n == -1){
			break;
		}
		for(int i = 0; i <= n; i++){
			result += pow(-1, i) / (2 * i + 1);
		}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		if(n == 0){
			cout << "The approximate value of pi using " << n + 1 << " term is: " << 4 * result << endl;
		}else{
			cout << "The approximate value of pi using " << n + 1 << " terms is: " << 4 * result << endl;
		}
		result = 0;
	}
	return 0;
}
