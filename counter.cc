/**
* @file counter.cc
* @brief Counts number of characters in input string.
* @author Aidan Crowl
*/


#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h>
 
using namespace std;




int main ()
{
  char szInput[256];
  printf ("Enter a sentence: ");
  gets (szInput);
  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
  return 0;
}