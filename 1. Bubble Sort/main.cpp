#include <iostream>
using namespace std;
#include "bubblesort.h"

/*void bubblesort(int, int[]);
void display(int, int[]);*/

int main(int argc, char **argv) {

  int *pa, temp, i, j, n = argc - 1;
  pa = new int[n];

  for (i = 0; i < n; i++) {
    pa[i] = atoi(*(argv + 1 + i));
  }

  bubblesort(n, pa); // n is the amount of integer number and pa is all the integer you have
  
  display(n,pa);
  
  delete[] pa;
  return 0;
}

/*void bubblesort(int n, int a[]) {

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
*/