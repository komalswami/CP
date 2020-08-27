#include <iostream>
using namespace std;
int
cyclelength (int x)
{
  int cyclelength = 1;
  while (x != 1)
    {
      if (x % 2 == 0)
	{
	  x = x / 2;
	}
      else
	{
	  x = x * 3 + 1;
	}
      cyclelength++;
    }
  return cyclelength;
}

int
maxcyc (int a, int b)
{
  int maxcy, thiscy;
  maxcy = 0;
  for (a=1; a <= b; a++)
    {
      thiscy = cyclelength (a);
      if (thiscy > maxcy)
	maxcy = thiscy;
    }
  return maxcy;
}

int
main ()
{
  int a, b, cases, n;
  cout << "\ntest cases";
  cin >> cases;
  cout<<endl;
  while (cases != 0)
    {
      cout << "enter a nd b";
      cin >> a >> b;
      n = maxcyc (a, b);
      cout<<endl<<a<<" "<<b<<" "<<n<<endl;
      cases--;
    }
    
}    