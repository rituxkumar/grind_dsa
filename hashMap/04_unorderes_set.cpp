#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
  unordered_set<int> s;
  s.insert(10);
  s.insert(20);
  s.insert(40);
  s.insert(50);
  s.insert(10);
  s.insert(60);

  for(auto it = s.begin();it != s.end();it++){
    cout<<*it<<endl;
  }
}