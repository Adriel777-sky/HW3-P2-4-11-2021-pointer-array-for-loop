/*Adriel A. Okolo
HW 3 Program 2 4/11/2021
Write a C++ program that stores n    elements in an array and prints the elements using a pointer and for loop.*/

#include <iostream>
using namespace std;

int main(){

int n, i;
   cout << "Enter the number of elements: " ;
   cin >> n;
  
   int array[n];
   int *pointer ;
   pointer = array ;
   cout << "Enter the elements: \n";
  
   // storing input from user 
for (i = 0; i < n; ++i) {
cin >> array[i];
}  cout << endl;
  
//printing for the array
   for (i=0; i< n ; i++){
       cout<<"Element you entered: " << *(pointer+i) <<endl; 
   }
}