#include <iostream>
#include <iomanip>
using namespace std;

typedef int DataType; //Defines a new name Data Type as a synonym for the int type. It makes the code more flexible since we can change DataType later if we want to use another type (like + float)
const int N_ITEMS = 10;// defines a constant value N_ITEMs


void swap( DataType&, DataType& );
void displayArray( const DataType[], int );
void bubbleSort( DataType[], int );

int main(){
   DataType a[ N_ITEMS ] = { 10, 5, 21, 5, 99, 8, 16, 4, 72, 25 };

   cout << "Initial array : ";
   displayArray( a, N_ITEMS );
   cout << endl;

   bubbleSort( a, N_ITEMS );

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

void bubbleSort(DataType theArray[], int n){
//To do Implement bubble sort
    bool sorted;

    for (int pass = 1; (pass < n) && !sorted; pass++)
    {
        sorted = true;

        for (int index = 0; index < n - pass; index++)
            {
                if (theArray[index] > theArray[index + 1])
                {
                    // Swap the value of array
                    // using swap function
                    swap( theArray[index],theArray[index+1] );

                    sorted = false; // signal exchange
                    displayArray(theArray, n);
                    cout << endl;
                }
            }

            if (sorted){
                break;
            }
    }//END OF OUTER LOOP
}
