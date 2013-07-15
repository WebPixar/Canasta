///////////////////////////////////////////////////////////////////////////////
// File:   testcard.cpp                Summer 2013
// Author: Patrick Vargas              patrick.vargas@colorado.edu
// Description:
//    Provides a basic testing suit
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#include "testcard.h"
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
namespace testsuit {
  //
  // Constructors
  //
  TestCard::TestCard () { }

  //
  // Member Methods
  // 
  bool TestCard::TestFlip() {
    CARDINIT;
    TEST ( mycard.isFaceUp() == false )

    mycard.flip();
    TEST ( mycard.isFaceUp() == true )

    return failed;
  }

  bool TestCard::TestIsFaceUp() {
    CARDINIT;
    TEST ( mycard.isFaceUp() == false )

    mycard.isFaceUp( true );
    TEST ( mycard.isFaceUp() == true )

    return failed;
  }

  bool TestCard::TestPrint() {
    CARDINIT;
    TEST ( strcmp( mycard.print(), "Ace of Spades" ) == 0 );

    return failed;
  } 

  bool TestCard::TestRank() {
    CARDINIT;
    TEST ( mycard.rank() ==  1 )
    
    mycard.rank( 8 );
    TEST ( mycard.rank() == 8 )

    return failed;
  }

  bool TestCard::TestSuit() {
    CARDINIT;
    TEST ( mycard.suit() == SPADES )

    mycard.suit( DIAMONDS );
    TEST ( mycard.suit() == DIAMONDS )

    return failed;
  }

  bool TestCard::TestValue() {
    CARDINIT;
    TEST ( mycard.value() == 0 )

    mycard.value( 500 );
    TEST ( mycard.value() == 500 )

    return failed;
  }
}
///////////////////////////////////////////////////////////////////////////////
