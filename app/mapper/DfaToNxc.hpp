//
//  DfaToCode.hpp
//
//
//  Created by Vincent Gierisch on 09.11.18.
//

#ifndef DfaToCode_hpp
#define DfaToCode_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//#include "interfaces/ICodeGenerator.hpp"
#include "../models/Dfa.hpp"

class DfaToNxc {
  public:
     void generate(string path, Dfa dfa);
};
#endif /* DfaToCode_hpp */
