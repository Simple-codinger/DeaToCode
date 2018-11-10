//
//  state.cpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#include "state.hpp"

State::State(string name){
    this->_name = name;
}

string State::getName(){
    return this->_name;
}
