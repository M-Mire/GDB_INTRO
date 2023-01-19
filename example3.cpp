#include <iostream>
using namespace std;
int i;

void dots(int a){
	for(i; i < a;i++){
		cout <<  ".";
	}
	cout << "\n";
}

void stars(int a){
        for(i; i < a;i++){
                cout <<  "*";
        }
	cout << "\n";
}

void dotstar(int a, int b){
	dots(a);
	stars(b);
}

int main(){
	dotstar(5,6);
	return 0;
}
