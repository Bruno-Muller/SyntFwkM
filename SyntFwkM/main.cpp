/* 
 * File:   main.cpp
 * Author: bruno
 *
 * Created on 5 mars 2013, 17:38
 */

#include <iostream>

#define ASSERT_ON
#include "assertion.h"

#include "expression.h"

#include "unaryexpression.h"
#include "unaryexpressionmodel.h"
#include "unaryshadowexpression.h"

#include "valuemodel.h"

#include "naryexpression.h"
#include "naryexpressionmodel.h"
#include "naryshadowexpression.h"

#include "not.h"
#include "notminus1.h"

#include "is.h"
#include "istriangle.h"

#include "expressionfactory.h"
#include "fuzzyfactory.h"

void tests() {
    //ASSERT(...);
}

int main(int argc, char** argv) {

    tests(); // lance les tests
    
    // Operators
    fuzzy::NotMinus1<int> opNot;
    
    return 0;
}

