#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <cmath>
using namespace std;
int
main ()
{
  vector < int >nums;

  list < int >res;

  int seq, num, result;

  int num1, num2;



  cin >> seq;

  if (seq < 0 && seq < 3000)

    exit (0);



  nums.reserve (seq);

  for (int i = 0; i < seq; i++)

    {

      cin >> num;

      nums.push_back (num);
    }
  vector < int >::iterator iter;

  for (iter = nums.begin (); iter != nums.end (); iter++)

    {

      num1 = *iter;

      iter++;

      if (iter == nums.end ())

	break;

      num2 = *iter;

      iter--;

      result = num1 - num2;

      res.push_back (abs (result));

    }
  for (int i = res.size (); i > 0; i--)

    {

      --seq;

      if (res.back () == (seq))

	{

	  res.pop_back ();

	}

      else if (res.front () == (seq))
	{

	  res.pop_front ();

	}
      else
	{
	  cout << "Not jolly" << endl;
	  exit (1);
	}

    }

  cout << "jolly" << endl;
  return 0;
}
