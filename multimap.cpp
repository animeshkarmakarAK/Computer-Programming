#include<bits/stdc++.h>

using namespace std;

 int main()
{
    // HAVE SOME PROBLEM
  multimap<const char*, int, int> m;

  m.insert(pair<const char* const, int>("a", 1));
  m.insert(pair<const char* const, int>("c", 2));
  m.insert(pair<const char* const, int>("b", 3));
  m.insert(pair<const char* const, int>("b", 4));
  m.insert(pair<const char* const, int>("a", 5));
  m.insert(pair<const char* const, int>("b", 6));

  cout << "Number of elements with key a: " << m.count("a") << endl;
  cout << "Number of elements with key b: " << m.count("b") << endl;
  cout << "Number of elements with key c: " << m.count("c") << endl;

  cout << "Elements in m: " << endl;
  for (multimap<const char*, int, int>::iterator it = m.begin();
       it != m.end();
       ++it)
   cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;

   // another one

   unordered_map<char, vector<string>> char_to_strings_map;
//loop to traverse the dictionary : key:c, value:s
  char_to_strings_map[c].emplace_back(s);
}
