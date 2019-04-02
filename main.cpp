#include <cctype>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <map>

using namespace std;
string Index(string s);

int main()
{
    string word;
    set<string> words;
    map<string, int> count;
    while (cin >> word && word != "#")
    {
        words.insert(word);
        ++count[Index(word)];
    }
    for (auto &i : words)
    {
        if (count[Index(i)] == 1)
            cout << i << '\n';
    }
    return 0;
}

string Index(string s)
{
  for (auto &i : s)
  {
    if (i < 'a')
        i = tolower(i);
  }
  sort(s.begin(), s.end());
  return s;
}
