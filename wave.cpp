/*
Created by: Connor Fricke (cd.fricke23@gmail.com)
File: wave.cpp
TODO:
  - everything
REVISIONS
24-Jan-2024
  - first attempt at creating program
*/

#include <iostream>
#include <cmath>
#include <windows.h> /* for Sleep() */

using namespace std;

// DECLARATIONS
int height(const double x);

// what the wave is made of
char thing(':');

int main()
{
  double iter = 0;

  while (iter < 200)
  {
    cout << "OOO ";
    for (int i = 0; i < height(iter); i++)
      cout << thing;
    cout << endl;

    Sleep(5);   // sleep for 5 ms
    iter += 0.1;
  }
  

  return 0;
}

// height() determines the height of the wave i.e. the number of characters we print out on a given line.
int height(const double x)
{
  double y = 30 + 28 * sin(x);
  return int(y);
}
