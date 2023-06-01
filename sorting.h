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
    swap(data[j],data[mi]);
  }
    display(data,length);
  cout<<"==========================================================="<<endl;
     
      
	} 
} 



void insertion(int a[],int n){
 int i,j;
  for(i=1;i<n;i++){
    int value=a[i];
    for(j=i-1;j>=0;j--){
      if(a[j]>value)
        a[j+1]=a[j];
    else break;
      //display(a,n);
        }
  a[j+1]=value;
  display(a,n);
  cout<<"==========================================================="<<endl;
}
}

void bubbleSort(int *a,int n){

int i,j;
// how may pair to compare?
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
  cout<<"============"<<endl;
    
  if (sorted == 0) break;
}
}
