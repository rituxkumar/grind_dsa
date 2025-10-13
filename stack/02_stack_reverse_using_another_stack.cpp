#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s1, s2;
  // push elements in s1
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);

  while (!s1.empty())
  {
    s2.push(s1.top()); // copy top from s1 into s2
    s1.pop();
  }

  // print reversed stack
  while (!s2.empty())
  {
    cout << s2.top() << " ";
    s2.pop();
  }
  return 0;
}
