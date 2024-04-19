/*
Created by: Connor Fricke (cd.fricke23@gmail.com)
File: wave.cpp
Latest Revision: 24-Jan-24
*/

#include <iostream>
#include <cmath>
#include <windows.h> /* for Sleep() */

using namespace std;

// DECLARATIONS
const int height(const double x);

const char thing(':');

int main()
{
  double iter = 0;

  while (iter < 200)
  {
    cout << "OOO ";
    for (int i = 0; i < height(iter); i++) { cout << thing; }
    cout << endl;

    Sleep(5); // milliseconds
    iter += 0.1;
  }
  
  return 0;
}

// height() determines the height of the wave i.e. the number of characters we print out on a given line.
const int height(const double x)
{
  double y = 30 + 28 * sin(x);
  return int(y);
}
