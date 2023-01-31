#include <iostream>
using namespace std;

void bubblesort(int, int[]);
void display(int, int[]);

void bubblesort(int n, int a[]) {

  int i, j;

  for (i = n - 1; i >= 1; i--) {
    int sorted = 0;
    for (j = 0; j < i; j++) {
      if (a[j] >
          a[j + 1]) { // check any value to it's right, if it's smaller. we swap
        int temp = a[j]; // swapping pa[j] and pa[j+1], use swap(a[j], a[j+1])
                         // it's easier to understand
        a[j] = a[j + 1];
        a[j + 1] = temp;
        sorted = 1;
      }
    }
    if (sorted == 0)
      break;
  }
}

void display(int n, int pa[]) {

  int i;
  
  cout << "Bubble Sort: ";
  for (i = 0; i < n - 1; i++) {
    cout << pa[i] << " ";
  }

  cout << endl;
}