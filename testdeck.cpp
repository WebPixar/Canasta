///////////////////////////////////////////////////////////////////////////////
// File:   testdeck.cpp                Summer 2013
// Author: Patrick Vargas              patrick.vargas@colorado.edu
// Description:
//    Provides a basic testing suit
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#include "testdeck.h"
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
namespace testsuit {
  //
  // Constructors
  //
  TestDeck::TestDeck () { }

  //
  // Member Methods
  // 
  bool TestDeck::TestCombine( ) {
    DECKINIT

    return failed;
  }
  bool TestDeck::TestDiscard( ) {
    DECKINIT

    return failed;
  }
  bool TestDeck::TestDeal( ) {
    DECKINIT

    return failed;
  }
  bool TestDeck::TestReset( ) {
    DECKINIT

    return failed;
  }
  bool TestDeck::TestShuffle( ) {
    DECKINIT

    return failed;
  }
}
///////////////////////////////////////////////////////////////////////////////
