#include <iostream>
using namespace std;

class MaxHeap
{
  int *arr;
  int size;       // total element in heap
  int total_size; // total size of array

public:
  MaxHeap(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  // insert into the heap.

  void insert(int value)
  {
    // if heap size is available or not
    if (size == total_size)
    {
      cout << "Heap overflow \n";
      return;
    }
    arr[size] = value;
    int index = size;
    size++;
    // compare with its parent

    while (index > 0 && arr[(index - 1) / 2] < arr[index])
    {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    };

    cout << arr[index] << " is inserted into the heap \n";
  }
  void print()
  {
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
};

int main()
{
  MaxHeap H1(6);
  H1.insert(4);
  H1.insert(14);
  H1.insert(42);
  H1.insert(47);
  H1.print();
}
