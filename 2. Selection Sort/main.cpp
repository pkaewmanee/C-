#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  int *pa, temp, i, j, n = argc - 1;
  pa = new int[n];

  for (i = 0; i < n; i++) {
    pa[i] = atoi(*(argv + 1 + i));
  }

  //Selection Sort Begin Find the biggest one and put it at the back
  
  for (i = n - 1; i >= 1; i--) {
    int maxIndex = 0;
    for(j = 0; j <= i; j++){
      if(pa[j] > pa[maxIndex]){
        maxIndex = j;
      }
    }
    int temp = pa[i];
    pa[i] = pa[maxIndex];
    pa[maxIndex] = temp;
  }

  cout << "Selection Sort: ";
  for (i = 0; i < n; i++){
    cout << pa[i] << " ";
  }

  cout << endl;

  delete[] pa;
  return 0;
}