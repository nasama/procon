#include<iostream>
#include<string>
using namespace std;

int main()
{
  int number = 0;
  string s;
  cin >> s;
  if (s[0] == '1') number++;
  if (s[1] == '1') number++;
  if (s[2] == '1') number++;
  cout << number << endl;
  return 0;
}
  