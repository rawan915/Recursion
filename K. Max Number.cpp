//#include <iostream>
//using namespace std;
//
//
//int printMax(int n, int arr[] , int i) {
//	
//	if (i==n-1)
//		return arr[i];
//
//	int max = printMax(n , arr , i+1);
//	if (arr[i] > max)
//		return arr[i];
//	else
//		return max;
//	
//
//
//}
//
//int main() {
//
//	int n; cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << printMax(n, arr, 0);
//}