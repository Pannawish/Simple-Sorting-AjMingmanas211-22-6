// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;
#include <chrono>
using namespace std::chrono;
#include "sorting.h"
// Driver code
int main()
{
	//int arr[] = { 1, 5, 9, 13, 17, 21, 26, 28, 34, 36};
  //int arr[] = {51, 21, 81, 2, 7, 15, 8, 1, 84, 521};
  int arr[] = { 85, 75, 61, 45, 43, 42, 42, 38, 31, 24};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);
auto start = high_resolution_clock::now();
	mergeSort(arr, 0, arr_size - 1);
auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
  cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
	return 0;
}

// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes
