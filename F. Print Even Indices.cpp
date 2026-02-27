#include <iostream>
using namespace std;


void printEvenIndices(int n, int arr[]) {
	if (n == 0)
		return;
	if((n-1) % 2 == 0)
		cout << arr[n - 1] << " ";
	printEvenIndices(n - 1, arr);


}

int main() {
	int n; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	printEvenIndices(n, arr);
	
	}