///////////////////////////////////////////////////////////////////////////////
// File:   testsuit.cpp                Summer 2013
// Author: Patrick Vargas              patrick.vargas@colorado.edu
// Description:
//    Testing infrastructure
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <cstdlib>
#include "testcard.h"
#include "testdeck.h"

using namespace std;
using namespace testsuit;

#define PASS( condition ) if( !condition ) printf("\033[1;32mPASSED\033[0m\n"); else fails++;
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
int main() {
  int fails = 0;
  TestCard cardTest;
  TestDeck deckTest;

  PASS( cardTest.TestRank() )
  PASS( cardTest.TestSuit() )
  PASS( cardTest.TestValue() )
  PASS( cardTest.TestIsFaceUp() )
  PASS( cardTest.TestFlip() )
  PASS( cardTest.TestPrint() )
  PASS( deckTest.TestCombine( ) )
  PASS( deckTest.TestDiscard( ) )
  PASS( deckTest.TestDeal( ) )
  PASS( deckTest.TestReset( ) )
  PASS( deckTest.TestShuffle( ) )

  if ( fails ) printf("\033[1;31m%i Test%s FAILED\033[0m\n", fails, fails == 1 ? "":"s");
  else printf("\033[1;32mAll Tests PASSED\033[0m\n");

  return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////
