#include <iostream>
#include <string.h>
using namespace std;
#include "sorting.h"
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(int argc,char ** argv) {
  auto start = high_resolution_clock::now();
  int i;
  int N=argc-1;
  int *a = new int [N];
  for(i=1;i<argc;i++)
    a[i-1]=atoi(argv[i]);


  //bubbleSort(a,N); 
  //insertion(a,N);
  selectionSort(a,N);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
  return 0;
}

// new number =2 
