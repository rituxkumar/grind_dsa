#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
  vector<int> arr;

public:
  void push(int x) { arr.push_back(x); }
  void pop()
  {
    if (!arr.empty())
      arr.pop_back();
  }
  int top() { return arr.empty() ? -1 : arr.back(); }
  bool isEmpty() { return arr.empty(); }

  void print()
  {
    if (arr.empty())
    {
      cout << "Stack is empty!\n";
      return;
    }
    cout << "Stack (top → bottom): ";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.print();
}