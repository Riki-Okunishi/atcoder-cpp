#include <string>
#include <vector>

using namespace std;

// string split
vector<string> split(const string &s, char delm) {
  vector<string> elems;
  string item;
  for (char ch : s) {
    if (ch == delm) {
      if (!item.empty()) {
        elems.push_back(item);
      }
      item.clear();
    } else {
      item += ch;
    }
  }
  if (!item.empty()) {
    elems.push_back(item);
  }
  return elems;
}