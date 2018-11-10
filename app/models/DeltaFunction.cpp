//
//  DeltaFunction.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#include "DeltaFunction.hpp"

DeltaFunction::DeltaFunction(State* state, list<Delta> deltas){
    this->_startState = state;
    this->_deltas = deltas;
}

State DeltaFunction::getSate(){
    return *(this->_startState);
}

list<Delta> DeltaFunction::getDeltas(){
    return this->_deltas;
}
