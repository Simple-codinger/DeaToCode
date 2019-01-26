//
//  ICodeGenerator.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef ICodeGenerator_hpp
#define ICodeGenerator_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "../../models/Dfa.hpp"

class ICodeGenerator{
  public:
    virtual void generate(string path, Dfa dfa) = 0;
};
#endif
