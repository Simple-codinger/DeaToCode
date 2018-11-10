//
//  DeltaFunction.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef DeltaFunction_hpp
#define DeltaFunction_hpp

#include <stdio.h>
#include <iostream>
#include <list>
#include "state.hpp"

using namespace std;

struct Delta{
    string* alphabetLetter;
    State* endState;
};

class DeltaFunction{
    private:
        State* _startState;
        list<Delta> _deltas;
        unsigned int _deltasCount;
    public:
        DeltaFunction(State* state, list<Delta> deltas);
        State getSate();
        list<Delta> getDeltas();
};

#endif /* DeltaFunction_hpp */
