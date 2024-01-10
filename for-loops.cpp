#include<iostream>
using namespace std;

int main() {

	for (int i = 4; i <= 40; i += 2) //prints out 4-40 up by 2s
		cout << i << " ";

	cout << endl;


	for (int j = 50; j >= 10; j -= 5) //prints out 50-10 down by 5s
		cout << j << " ";

	cout << endl;

	for (int k = 0; k < 3; k++) { //rows
		for (int k = 0; k < 5; k++) { //columns
			cout << "*"; //use * as print
		}
		cout << endl;
	}

}
