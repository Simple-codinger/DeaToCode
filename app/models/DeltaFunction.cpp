//
//  DeltaFunction.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#include "DeltaFunction.hpp"

DeltaFunction::DeltaFunction(State state, list<Delta> deltas){
    this->_state = state;
    this->_deltas = deltas;
}

State DeltaFunction::getSate(){
    return this->state;
}

list<Delta> getDeltas(){
    return this->_deltas;
}
