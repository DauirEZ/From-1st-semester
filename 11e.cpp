#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main ()
{
  int size;
  cin >> size;
  vector <map <char, int> > myvec;
  for (int i = 0 ; i != size ; i++)
    {
    string mystr;
    cin >> mystr;
    map <char, int> mymap;
    for (int j = 0 ; j < mystr.length() ; j++)
        {
      mymap[mystr[j]]++;
    }
    myvec.push_back(mymap);
  }
    bool flag = false;
  for (char temp = 'a' ; temp <= 'z' ; temp++)
    {
    bool ok = true;
    for (auto var : myvec)
    {
      if (var[temp] == 0)
      {
        ok = false;
      }
    }
    if (ok)
    {
      cout << temp << " ";
      flag = true;
        }
  }
  if (!flag)
    {
        cout << "NO COMMON CHARACTERS";
    }
}