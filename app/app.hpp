//
//  app.hpp
//  DeaToCode
//
//  Created by Vincent Gierisch on 09.11.18.
//  Copyright © 2018 Vincent Gierisch. All rights reserved.
//

#ifndef app_hpp
#define app_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "mapper/JsonToDfa.hpp"
#include "mapper/DfaToNxc.hpp"

using namespace std;

class Application{
private:
    string _pathToJson;
    string _pathToCode;
    DfaToNxc _codeGenerator;
    void printWelcomeText();

public:
    Application(string jsonPath, string codePath, DfaToNxc codeGenerator);
    void run();
};
#endif /* app_hpp */
