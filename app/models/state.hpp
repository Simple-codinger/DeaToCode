//
//  state.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef state_hpp
#define state_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class State{
    private:
        string _name;
    
    public:
        State(string name);
        string getName();
};
#endif /* state_hpp */
