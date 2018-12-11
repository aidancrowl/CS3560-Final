#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h>
#include "/home/acrowl/googletest/googletest/include/gtest/gtest.h"

 
using namespace std;

int main ()
{
  char szInput[256];
  printf ("Enter a sentence: ");
  gets (szInput);
  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
  return 0;
}


TEST(counterTest, Test1) {
  EXPECT_EQ(61, counter("test1.txt"));
}

TEST(counterTest, Test2) {
  EXPECT_EQ(0, counter("test2.txt"));
}

TEST(counterTest, Test3) {
  EXPECT_EQ(13, counter("test3.txt"));
}
