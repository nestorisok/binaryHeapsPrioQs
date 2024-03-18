#include <iostream>

using namespace std;

class Heap
{
public:

  
    
    int Arr[];
    Heap();

    void printArray(int Arr[], int n);

    //Max heap
    void modifyValMax(int Arr[], int n, int i, int val); //Modify value
    void insert_value_maxHeap(int Arr[], int val, int& n); //Adds value at the end of array and calls max_heapify
    void max_heapify(int Arr[], int i, int n); //Maintains the max heap property
    int extract_maximum(int Arr[], int& n); //Return the maximum element in heap and swap last element with first element
    void ascendingHeapSort(int Arr[], int n); //Prints the array in ascending order
    void buildMaxHeap(int Arr[], int n); //Heapifies entire list


    //Min Heap
    void modifyValMin(int Arr[], int n, int i, int val); //Modify value
    void insert_value_minHeap(int Arr[], int val, int& n); // Adds value at the end of array and calls min_heapify
    void min_heapify(int Arr[], int i); //Maintains min heap property
    int extract_minimum(int Arr[]); //Return the minimum element in heap and swap last element with first element
    void descendingHeapSort(int Arr[], int n); //Prints the array in descending order
    void buildMinHeap(int Arr[], int n); //Heapifies entire list


      /*
        (// = done)
  //      1. Asks for user input for ascending or descending order
  //      2. If ascending order then build max heap from the list.Else if descending order then build min heap from
  //      the list.
  //      Hint: Use the Max Heap algorithm and Min Heap algorithm mentioned in the slide no. 6 and 7 respectively to write the
  //      program.
        3. Insert an element into the heap.
        Hint : Use the the algorithm mentioned in the slide no. 10 to write the program.
        4. Modify the current element in the heap.
        Hint : Use the the algorithm mentioned in the slide no. 9 to write the program.
        5. Extract the maximum and minimum element from the max heap and min heap respectively.
        Hint : Use the the algorithm mentioned in the slide no. 11 to write the program.
  //      6. Print the maximum and minimum element of the max heap and min heap respectively.
        Hint : Just return the first element of the heap.Do not remove it.
  //      7. Perform heap sort(ascending or descending based on the user input)
  //      Hint : Use the the algorithm mentioned in the slide no. 8 to write the program.
        8. Fill out the report sheet.
        Hint : Write a detailed report as per the template.
        
        */








};