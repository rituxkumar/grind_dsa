#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// It store data in key-value pair.
// Key should be unique.
int main()
{
 map<int, int> mp;
  mp.insert(make_pair(20, 30));
  mp.insert(make_pair(30, 40));
  mp.insert(make_pair(40, 50));
  mp.insert(make_pair(20, 30));
  mp.insert(make_pair(60, 70));
  mp.insert(make_pair(70, 30));
  mp[20] = 99;
  // value ko update kar sakte hai.

  cout << endl;

  // if(mp.count(20))
  // cout<<mp[20]<<" ";

  // delete
  // mp.erase(20); 

  unordered_map<int, int> m;
  m.insert(make_pair(20, 30));
  m.insert(make_pair(30, 40));
  m.insert(make_pair(40, 50));
  m.insert(make_pair(20, 30));
  m.insert(make_pair(60, 70));
  m.insert(make_pair(70, 30));
  m[20] = 99; 


  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}