#include <iostream>
#include <iomanip>
using namespace std;

typedef int DataType;
const int N_ITEMS = 10;

void swap( DataType&, DataType& );
void displayArray( const DataType[], int );
int indexOfLargest( const DataType[], int );
void selectionSort( DataType[], int );

int main(){
   DataType a[ N_ITEMS ] = { 10, 5, 21, 5, 99, 8, 16, 4, 72, 25 };

   cout << "Initial array : ";
   displayArray( a, N_ITEMS );
   cout << endl;

   selectionSort( a, N_ITEMS );

   cout << "Sorted array : ";
   displayArray( a, N_ITEMS );
   cout << endl;

   return 0;
}

void swap(DataType& x, DataType& y){
   DataType temp = x;
   x = y;
   y = temp;
   cout << "Swapped " << setw(2) << x << " with " << setw(2) << y << " --->";
}

void displayArray( const DataType theArray[], int size ){
   for ( int i = 0; i < size; ++i )
      cout << setw(2) << theArray[ i ] << " ";
}

int indexOfLargest(const DataType theArray[], int size){
   //To do: Get the index of the largest element in the
   //       unsorted list.
   int indexSoFar = 0;
   for (int currentIndex = 1; currentIndex < size; currentIndex++ )
   {
       if(theArray[currentIndex] > theArray[indexSoFar])
        indexSoFar = currentIndex;
   }
   return indexSoFar;//index of largest item
}

void selectionSort(DataType theArray[], int n){
   //To do: Implement selection sort
   for (int last = n - 1; last >= 1; last--)
   {
       int largest = indexOfLargest (theArray, last + 1);

       // Hint: swap current largest with theArray[last]
       swap(theArray[largest],theArray[last] );
       displayArray(theArray, n);
       cout<<endl;
   }
}
