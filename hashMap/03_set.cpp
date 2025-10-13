#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
  // set<int> s;
  // s.insert(10);
  // s.insert(20);

  // s.insert(30);
  // s.insert(40);
  // s.insert(20);
  // s.insert(50);

  //  for(auto it = s.begin();it != s.end();it++){
  //   cout<<*it<<endl;
  //  }

  // find ;- return the iterator of that number,

  // if(s.find(10) != s.end())
  // cout<<"Present\n";
  // else
  // cout<<"Absent\n";

  // count ;- count of that number

  // if(s.count(10))
  // cout<<"present\n";
  // else
  // cout<<"Absent\n";

  // delete

  // s.erase(10);
  // cout<<s.count(10)<<" ";

  multiset<int> s;
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(10); s.insert(10);
  s.insert(40);
 

      

  cout<<s.erase(10)<<" ";

   for (auto it = s.begin(); it != s.end(); it++)
   {
     cout << *it << " ";

   }
}