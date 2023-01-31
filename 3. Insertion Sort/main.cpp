#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  int *pa, temp, i, j, n = argc - 1;
  pa = new int[n];

  for (i = 0; i < n; i++) {
    pa[i] = atoi(*(argv + 1 + i));
  }



  cout << "Insertion Sort: ";
  for (i = 0; i < n; i++){
    cout << pa[i] << " ";
  }

  cout << endl;

  delete[] pa;
  return 0;
}