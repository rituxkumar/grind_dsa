#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(string s)
{
  stack<char> st;
  for (char ch : s)
  {
    st.push(ch);
  }
  for (char ch : s)
  {
    if (ch != st.top())
      return false;
    st.pop();
  }
  return true;
}

int main()
{
  string str = "madam";
  cout << (isPalindrome(str) ? "Palindrome" : "Not Palindrome") << endl;
}