#include <iostream>
#include <vector> // c++ STL dynamic array ke liye.
using namespace std;

class Stack
{
private:
  vector<int> arr; // ye actual storage hai , stack ke element yhi store hote hai.private ka mtlb bahar se direct s.arr nhi kar sakte -encapsulation.

public:
  void push(int x)
  {
    arr.push_back(x);
  }

  void pop()
  {
    if (arr.empty())
    {
      cout << "Stack is empty \n";
      return;
    }
    arr.pop_back();
  }
  int top()
  {
    if (arr.empty())
    {
      cout << "stack is empty \n";
      return -1;
    }
    return arr.back();
  }
  bool isEmpty()
  {
    return arr.empty();
  }
  int size()
  {
    return arr.size();
  }
};

int  main(){
  Stack s;
  s.push(10);
  s.push(20);
  // s.push(30);
  // s.push(40);
  // s.pop();

  cout<<"Top element"<<s.top()<<endl;
  cout<<"Size"<<s.size()<<endl;
}
