#include <iomanip>
using namespace std;

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

// selection sort function module in C 
void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
  for(j=0;j<length-1;j++)
    {
  mi=j;
      //what about mi ^^
	for (i = j+1; i < length; i++) 
	{ 
	   /* find the minimum */ 
	    if(data[mi]>data[i])
      {
        mi=i;
      }
    //swap(data[j],data[mi]);
  }
      swap(data[j],data[mi]);
    display(data,length);
  cout<<"==========================================================="<<endl;
     
      
	}
  display(data,length);
} 



void insertion(int a[],int n){
 int i,j;
  for(i=1;i<n;i++){
    int value=a[i];
    display(a,n);
    for(j=i-1;j>=0;j--){
      if(a[j]>value)
        a[j+1]=a[j];
    else break;
      display(a,n);
        }
  a[j+1]=value;
    display(a,n);
  //display(a,n);
  cout<<"==========================================================="<<endl;
}
}

void bubbleSort(int *a,int n){

int i,j;
// how many pair to compare?
int sorted;
for(i=0;i<n-1;i++)
{
  display(a,n);
  sorted=0;
  for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
    swap(a[j],a[j+1]);
    sorted=1;
      
    }

  }  
  display(a,n);
  cout<<"============"<<endl;
    
  if (sorted == 0) break;
}
}

//merge sort
// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
	   int const right)
{
	int const subArrayOne = mid - left + 1;
	int const subArrayTwo = right - mid;

	// Create temp arrays
	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
	int indexOfMergedArray = left;

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < subArrayOne
		&& indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne]
			<= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray]
				= leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray]
				= rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray]
			= leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray]
			= rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
