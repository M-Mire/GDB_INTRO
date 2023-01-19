#include <iostream>
using namespace std;

int factorialFinder(int x){
	if (x == 1){
		return 1;
	} else {
		return x*factorialFinder(x-1);
	}


}

int main() {
	int x;
	cout << "Provide a positive integer :";
	if ( cin >> x && x >= 0){
		cout << "factorial of " << x << "=" <<factorialFinder(x) << endl;
	} else {
		cout << "Invalid input\n";
	}
	return 0;
}
