#include <iostream>
using namespace std;

int main() {
  int elements, min;

  cout << "Введите количество элементов массива   ";
  cin >> elements;

  int array[elements];
  
  cout << "Введите 1 элемент массива   ";
  cin >> array [0];
  min = array [0];
  
  for (int i = 1; i < elements; ++i) {
    cout << "Введите " << i + 1 << " элемент массива   ";
    cin >> array [i];

    if (array [i] < min) {
      min = array [i];
    }
  }

  cout << "Минимальный элемент массива: " << min;

  return 0;
}