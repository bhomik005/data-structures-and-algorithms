#include <iostream>

using std::cout;
using std::endl;

// Insert the element n into the arr at the end
// capacity is the number of elements array can store
void insertEnd(int arr[], int n, int length, int capacity) {
    // check if we have capacity
    if(length < capacity) {
        arr[length] = n;
    }
    // increment the length
    length += 1;
}

// overwrite the last element with number 0
void removeEnd(int arr[], int length) {
    // check if we have at least one element in the array
    if(length > 0) {
        arr[length - 1] = 0;
    }
    // decrement the length
    length -= 1;
}

// insert the element in the middle of array
// shift the elements to the right through by one position
// then insert the elements at the ith index
void insertMiddle(int arr[], int i, int n, int length) {
    // shift the elements to the right by one pos
    for(int i = length - 1; i > i - 1; i--) {
        arr[i + 1] = arr[i];
    }
    // insert the element
    arr[i] = n;
    // increment the length 
    length += 1;
}

void removeMiddle(int arr[], int i, int length) {
    // start from index i + 1
    // overwrite the element i with i + 1
    for(int i = i + 1; i < length; i++) {
        // shift the elements to the left by pos 1
        arr[i - 1] = arr[i];
    }

    // overwrite the last element with 0
    arr[length] = 0;

    // decrement the length by 1
    length -= 1;
}

// iterate through the array elements from start to finish
void printArr(int arr[], int capacity) {
    for(int i = 0; i < capacity; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}